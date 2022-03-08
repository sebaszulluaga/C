#include<iostream>
using namespace std;

int main()
{
    int cnt,i=0,ii,res,nc=0,np=0;
    cout << cnt;
    
    while(np!=cnt)
    {
        i++;
        for(ii=1;ii<=i;ii++)
        {
            res=i%ii;
            if(res==0)
                nc=nc+1;
        }
        if(nc==2)
        {
            cout << i << " ";
            np++;
        }
        nc=0;
    }
}
