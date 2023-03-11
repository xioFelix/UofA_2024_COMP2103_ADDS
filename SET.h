#ifndef SET
#define SET

template < class T>
class Set{
    private:
        std::vector<T> members;
    public:
    void add(T member);
    bool isMember(T member);
    void remove(T member);
};

#endif
