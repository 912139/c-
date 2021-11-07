#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <memory>

using namespace std;

//////////////////////////////////1
list <double> arithmeticMean(list<double> List)
{
    double sum = 0;
    int i = 0;
for (auto x : List) {
sum+=x;
i++;
}
List.push_back(sum/i);
return List;
}

void printList (list<double> List)
{
    for (auto x : List) {
cout<<x<<" ";
}
cout<<endl;
}
//////////////////////////////////2
class Matrix
{
    vector <vector<int>> m_vector;
    public:
    Matrix (int n) {
        vector <vector <int>> vector1(n, vector <int>(n));
        m_vector = vector1;
    }
    void printMatrix()
    {
        cout<<"Matrix: "<<endl;
    for (auto it = m_vector.begin();it!=m_vector.end();++it){
    for (const auto &i:*it)
    cout<<i;
    cout<<endl;
    }
    }
    void initMatrix()
    {
    for (auto it = m_vector.begin();it!=m_vector.end();++it){
    for (auto &i:*it)
    i = rand()%3 + 1;
    }
    }
    int findDet()
    {
        switch (m_vector.size())
        {
        case 1: return m_vector[0][0];
        case 2: return (m_vector[0][0]*m_vector[1][1] - m_vector[1][0]*m_vector[0][1]);
        case 3: return
(m_vector[0][0]*m_vector[1][1]*m_vector[2][2] - m_vector[0][0]*m_vector[1][2]*m_vector[2][1] - m_vector[0][1]*m_vector[1][0]*m_vector[2][2] + m_vector[0][1]*m_vector[1][2]*m_vector[2][0] + m_vector[0][2]*m_vector[1][0]*m_vector[2][1] - m_vector[0][2]*m_vector[1][1]*m_vector[2][0]);
        default: return 0;
        }
    }
    ~Matrix () {};

};
//////////////////////////////////3
template<typename ValueType>
class OwnIterator: public std::iterator<std::input_iterator_tag, ValueType>
{
    friend class OwnContainer;
private:
    OwnIterator(ValueType* p);
public:
    OwnIterator(const OwnIterator &it);

    bool operator!=(OwnIterator const& other) const;
    bool operator==(OwnIterator const& other) const;
    typename OwnIterator::reference operator*() const;
    OwnIterator& operator++();
private:
    ValueType* p;
};

template<typename ValueType>
OwnIterator<ValueType>::OwnIterator(ValueType *p) :
    p(p)
{
}

template<typename ValueType>
OwnIterator<ValueType>::OwnIterator(const OwnIterator& it) :
    p(it.p)
{

}

template<typename ValueType>
bool OwnIterator<ValueType>::operator!=(OwnIterator const& other) const
{
    return p != other.p;
}

template<typename ValueType>
bool OwnIterator<ValueType>::operator==(OwnIterator const& other) const
{
    return p == other.p;
}

template<typename ValueType>
typename OwnIterator<ValueType>::reference OwnIterator<ValueType>::operator*() const
{
    return *p;
}

template<typename ValueType>
OwnIterator<ValueType> &OwnIterator<ValueType>::operator++()
{
    ++p;
    return *this;
}

class OwnContainer
{
public:
    typedef OwnIterator<int> iterator;
    typedef OwnIterator<const int> const_iterator;

    OwnContainer(std::initializer_list<int> values);

    iterator begin();
    iterator end();

    const_iterator begin() const;
    const_iterator end() const;
private:
    const size_t size;
    std::unique_ptr<int[]> data;
};

OwnContainer::OwnContainer(std::initializer_list<int> values) :
    size(values.size()),
    data(new int[size])
{
    std::copy(values.begin(), values.end(), data.get());
}

OwnContainer::iterator OwnContainer::begin()
{
    return iterator(data.get());
}

OwnContainer::iterator OwnContainer::end()
{
    return iterator(data.get() + size);
}

OwnContainer::const_iterator OwnContainer::begin() const
{
    return const_iterator(data.get());
}

OwnContainer::const_iterator OwnContainer::end() const
{
    return const_iterator(data.get() + size);
}

int main()
{
//////////////////////////////////1
cout<<"Task 1:"<<endl;
list <double> List{ 1, 3, 3 };
List = arithmeticMean(List);
printList(List);
//////////////////////////////////2
cout<<"Task 2:"<<endl;
Matrix m(3);
m.printMatrix();
m.initMatrix();
m.printMatrix();
cout<<"Det = "<<m.findDet()<<endl;
//////////////////////////////////3
cout<<"Task 3:"<<endl;
OwnContainer con {1,2,3,4};
cout<<"OwnContainer: ";
for (const auto x : con)
cout<<x;
}
