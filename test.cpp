class Autocomplete {
 public:
  Autocomplete() {}

  void insert(const std::string& word) {
    Node* node = &root;
    for (char c : word) {
      if (!node->children.count(c)) {
        node->children[c] = new Node();
      }
      node = node->children[c];
    }
    node->is_end = true;
  }

  std::vector<std::string> getSuggestions(const std::string& partial_word) {
    std::vector<std::string> suggestions;
    Node* node = &root;
    for (char c : partial_word) {
      if (!node->children.count(c)) {
        return suggestions;
      }
      node = node->children[c];
    }
    for (auto child : node->children) {
      if (child.second->is_end) {
        suggestions.push_back(partial_word + child.first);
      }
    }
    return suggestions;
  }

 private:
  struct Node {
    bool is_end = false;
    std::unordered_map<char, Node*> children;
  };

  Node root;
};

class PrefixMatcher {
 public:
  PrefixMatcher() {}

  void insert(const std::string& address, int router_number) {
    Node* node = &root;
    for (char c : address) {
      if (!node->children.count(c)) {
        node->children[c] = new Node();
      }
      node = node->children[c];
    }
    node->router_number = router_number;
  }

  int selectRouter(const std::string& network_address) {
    Node* node = &root;
    for (char c : network_address) {
      if (!node->children.count(c)) {
        return -1;
      }
      node = node->children[c];
    }
    return node->router_number;
  }

 private:
  struct Node {
    int router_number = -1;
    std::unordered_map<char, Node*> children;
  };

  Node root;
};