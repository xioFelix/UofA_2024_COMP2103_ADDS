#include <iostream>
#include <string>
#include <vector>

const int NUM_ROUTERS = 3; // 路由器数量

class TrieNode {
public:
    TrieNode* children[2];
    int routerNumber;

    TrieNode() {
        children[0] = nullptr;
        children[1] = nullptr;
        routerNumber = -1;
    }
};

class PrefixMatcher {
private:
    TrieNode* root;

public:
    PrefixMatcher() {
        root = new TrieNode();
    }

    void insert(const std::string& address, int routerNumber) {
        TrieNode* current = root;
        for (char ch : address) {
            int index = ch - '0';
            if (current->children[index] == nullptr) {
                current->children[index] = new TrieNode();
            }
            current = current->children[index];
        }
        current->routerNumber = routerNumber;
    }

    int selectRouter(const std::string& networkAddress) {
        TrieNode* current = root;
        int lastRouter = -1;
        for (char ch : networkAddress) {
            int index = ch - '0';
            if (current->children[index] == nullptr) {
                break;
            }
            current = current->children[index];
            if (current->routerNumber != -1) {
                lastRouter = current->routerNumber;
            }
        }
        return lastRouter;
    }
};

int main() {
    PrefixMatcher matcher;
    matcher.insert("110011011101", 1);
    matcher.insert("110011011", 2);
    matcher.insert("11001101", 3);

    std::vector<std::string> networkAddresses = {
        "11001101110",
        "110011010",
        "1100110111001",
        "1100110101"
    };

    for (const auto& address : networkAddresses) {
        int selectedRouter = matcher.selectRouter(address);
        std::cout << "Network Address: " << address << ", Selected Router: " << selectedRouter << std::endl;
    }

    return 0;
}
