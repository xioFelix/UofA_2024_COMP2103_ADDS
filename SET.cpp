#include "SET.h"

template< class T >
void Set<T>::add(T newMember){
    members.pushback(newMember);

}

template<class T>
bool Set<T>::isMember(T checkMember){
    for (size_t i; i< members.size(); i++){
        if (members.at(i) == checkMember)
            return true;
    }
    return false;
}

template <class T>
void Set<T>::remove(T deleteMember){


}
