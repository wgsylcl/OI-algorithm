#include<iostream>
#include<cstdio>
using namespace std;
inline int read()
{
    int x=0,f=1;
    char ch;
    for(ch=getchar();!isdigit(ch);ch=getchar()) if(ch=='-') f=-1;
    for(;isdigit(ch);ch=getchar())
    {
        x=(x<<3)+(x<<1)+(ch-'0');
    }
    return f*x;
}
inline void write(int x)
{
    if(x<0)
    {
        putchar('-');
        x=-x;
    }
    if(x>9) write(x/10);
    putchar(x%10+'0');
    return;
}
typedef pair<int,int> pii;
class verson_array
{
    struct node
    {
        int val;
        node* ls;
        node* rs;
        node(int val=0,node* ls=nullptr,node* rs=nullptr):val(val),ls(ls),rs(rs){}
        ~node(){if(ls!=nullptr) delete ls,ls=nullptr;if(rs!=nullptr) delete rs,rs=nullptr;}
    }*root[200000+10];
    int verson,range;
    node* newnode(int val=0,node* ls=nullptr,node* rs=nullptr)
    {
        static node x[100000*15],*tmp=x;
        *tmp=node(val,ls,rs);
        tmp++;
        return tmp-1;
    }
    node* bulid(int l,int r)
    {
        if(l==r)
        return newnode(l);
        int mid=(l+r)>>1;
        return newnode(0,bulid(l,mid),bulid(mid+1,r));
    }
    node* __update(node* u,int l,int r,int tar,int val)
    {
        if(l==tar&&tar==r) return newnode(val);
        int mid=(l+r)>>1;
        if(l<=tar&&tar<=mid) return newnode(0,__update(u->ls,l,mid,tar,val),u->rs);
        if(mid<tar&&tar<=r) return newnode(0,u->ls,__update(u->rs,mid+1,r,tar,val));
        return nullptr;
    }
    int __query(node* u,int l,int r,int tar)
    {
        if(l==tar&&tar==r) return u->val;
        int mid=(l+r)>>1;
        if(l<=tar&&tar<=mid) return __query(u->ls,l,mid,tar);
        if(mid<tar&&tar<=r) return __query(u->rs,mid+1,r,tar);
        return -1;
    }
    public:
    verson_array(int range):range(range),verson(0)
    {
        for(auto& i:root) i=nullptr;
        root[0]=bulid(0,range);
    }
    ~verson_array()
    {
        for(int i=0;i<=verson;i++)
        if(root[i]!=nullptr) delete root[i],root[i]=nullptr;
    } 
    void update(int ver,int tar1,int val1,int tar2,int val2)
    {
        verson++;
        root[verson]=__update(root[ver],0,range,tar1,val1);
        root[verson]=__update(root[ver],0,range,tar2,val2);
        return;
    }
    pii query(int ver,int tar1,int tar2)
    {
        pii ret=pii(__query(root[ver],0,range,tar1),__query(root[ver],0,range,tar2));
        verson++;
        root[verson]=root[ver];
        return ret;
    }
    void SetNewVerson(int ver){verson=ver;return;}
};
class verson_dsu
{
    verson_array fa;
    int range,verson;
    public:
    verson_dsu(int range):range(range),verson(0),fa(verson_array(range)){}
};
int main()
{
    
    return 0;
}
