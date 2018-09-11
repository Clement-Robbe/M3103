#ifndef LIST_HPP
#define LIST_HPP
#include <node.hpp>
template <typename T>
class CList
{
private:
    CNode<T>* m_Head;
    CNode<T>* m_Tail;
public:
    CList(const CNode<T>* & m_Head) : m_Head(m_Head) {
        CNode<T>* cpHead(this->m_Head);
        while(cpHead->GetNextNode() != nullptr){
            cpHead = cpHead->GetNextNode();
        }
        m_Tail = cpHead;
    }
    ~CList ();
   //ajout en tête de liste
    void push_front (const T & val);
   //affichage
    void Show () const;
    //recherche d'un élément dans la liste, renvoie le pointeur du maillon si l'élément est présent, nullptr sinon
    CNode<T>* Find (const T & val) const;
    //ajout d'une valeur après un maillon de la liste
    void Add (const T & val, CNode<T>*);
    //détache un maillon de la liste et le supprime
    void Delete (CNode<T>*);
};

template<typename T>
CList::~CList()
{

}

template<typename T>
void CList::push_front(const T &val)
{

}

template<typename T>
CNode<T> *CList::Find(const T &val) const
{

}

template<typename T>
void CList::Add(const T &val, CNode<T> *)
{

}

template<typename T>
void CList::Delete(CNode<T> *)
{

}

#endif // LIST_HPP

//fdp
