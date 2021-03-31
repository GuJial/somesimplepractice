#include<iostream>
#include<cmath>
#include<numeric>
using namespace std;

int main()
{
    int a[100];
    int n;
    int *p1=a;
    int b[100];
    int *p2=b;
    int temp[100];
    int temp1=0;
    int temp2=0;
    int m;
    
    cout<<"���ݸ���(1-100)"<<endl;
    cin>>n;
    
    //����¼�� 
    cout<<"�Ա���"<<endl;
    for(int i=1;i<=n;i++,*p1++)
    {
            cin>>*p1;
    }
    p1=&a[0];
    
    cout<<"Ӧ����"<<endl; 
    for(int ii=1;ii<=n;ii++,*p2++)
    {
            cin>>*p2;
    }
    p2=&b[0];
    
    //���ݼ��� 
    for(int iii=0;iii<n;iii++)
    {
            temp[iii]=a[iii]*b[iii];
    }
    for(int iiii=0;iiii<n;iiii++)
    {
            temp1+=temp[iiii];
    }
    for(int iiiii=0;iiiii<n;iiiii++)
    {
            m=a[iiiii];
            temp2+=m*m;
    }
    //������� 
    cout<<"x | ";
    for(int j=1;j<=n;j++,*p1++)
    {
            cout<<*p1<<" | ";
    }
    cout<<endl;
    p1=&a[0];
    
    cout<<"y | ";
    for(int jj=1;jj<=n;jj++,*p2++)
    {
            cout<<*p2<<" | ";
    }
    cout<<endl;
    p1=&a[0];
    
    cout<<"xy | ";
    for(int jjj=0;jjj<n;jjj++)
    {
            cout<<temp[jjj]<<" | ";
    }
    cout<<endl;
    p1=&a[0];
    
    cout<<"x--="<<accumulate(a,a+n,0)/n<<endl;
    cout<<"y--="<<accumulate(b,b+n,0)/n<<endl;
    cout<<"b^="<<(temp1-n*(accumulate(a,a+n,0)/n)*(accumulate(b,b+n,0)/n))/(temp2-n*pow(double(accumulate(a,a+n,0)/n),2))<<endl;
    cout<<"a^="<<accumulate(b,b+n,0)/n-(temp1-n*(accumulate(a,a+n,0)/n)*(accumulate(b,b+n,0)/n))/(temp2-n*pow(double(accumulate(a,a+n,0)/n),2))*(accumulate(a,a+n,0)/n)<<endl;
    
    system("pause");
    return 0;
}
