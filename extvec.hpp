#ifndef     _H_EXTVEC_
    #define _H_EXTVEC_
    #include <vector>
    #include <algorithm>
template <class _DT>
class extvec : public std::vector<_DT>{
public:
    void pop_front()
        this->erase(this->begin());
    void push_front(const _DT& _Val)
        this->insert(this->begin(), _Val);
    void reverse() 
        std::reverse(this->begin(), this->end());
    void sort()
        std::sort(this->begin(), this->end());
}

#endif   // _H_EXTVEC_