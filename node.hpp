#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>
template <typename T>
class CNode
{
private:
    T m_Data;
    CNode* m_Next;
public:
    //constructor
    CNode (T & m_Data, CNode* & m_Next) : m_Data(m_Data), m_Next(m_Next) {
    }
    //destructor
    ~CNode ();

    //getter / setter

    void setNextNode(CNode *Next);
    CNode* GetNextNode() const;

    void setData(const T &Data);
    T GetData() const;

    CNode *Next() const;
    void setNext(CNode *Next);
};

template<typename T>
CNode<T>* CNode<T>::GetNextNode() const
{
    return m_Next;
}

template<typename T>
void CNode<T>::setNextNode(CNode *Next)
{
    m_Next = Next;
}

template<typename T>
CNode<T>::~CNode()
{
    //delete this;
    std::cout << GetData() << std::endl;
}

template<typename T>
void CNode<T>::setData(const T &Data)
{
    m_Data = Data;
}

template<typename T>
T CNode<T>::GetData() const
{
    return m_Data;
}
#endif // NODE_HPP
