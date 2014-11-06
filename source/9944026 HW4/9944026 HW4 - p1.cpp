#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;
float MAX(float *in)
{
    float max=in[0];
    for(int i=0;i<80;i++)
    {
        if(in[i]>max)
            max=in[i]; 
    }
    
    return max;
}

float MIN(float *in)
{
    float min=in[0];    
    for(int i=0;i<80;i++)
    {
        if(in[i]<min)
            min=in[i];
    } 
    
    return min;
} 
void scaled(float *in,float range)
{
    float min=MIN(in);
    float max=MAX(in);
    for(int i=0;i<80;i++)
    {
        in[i]=round(range*((in[i]-min)/(max-min)));
    }
}



int main() 
{     
    //1 1.57 16
    cout<<"Please input IM phi nt : ";
    
    float IM,phi,nt,step;
    
    cin>>IM>>phi>>nt;
    step=3.2/nt;
    
    float **ptr;
    ptr=new float*[2];
    ptr[0]=new float[80];
    ptr[1]=new float[80];
    ptr[0][0]=0;
    
    for(int i=0;i<2;i++)
        for(int j=0;j<80;j++)
            ptr[i][j]=0;
            
    
    for(int i=0;i<80;i++)
        ptr[0][i+1]=ptr[0][i]+step;
         
    for(int i=0;i<80;i++)
        ptr[1][i]=IM*sin(ptr[0][i]+phi); 
  
    float t[80],x[80];
 //   
    for(int i=0;i<80;i++)
    {
        t[i]=ptr[0][i];
        x[i]=ptr[1][i];
    }
   
    scaled(x,25.0); 
    scaled(t,80);
//    
    
    cout<<"IM:"<<IM<<endl;
    cout<<"phi:"<<phi<<endl;
    cout<<"nt:"<<nt;
    
    
    for(int i=0;i<80;i++)
    {
        cout<<ptr[0][i]<<" ";
        cout<<ptr[1][i]<<" ";
    }
    for(int i=25;i>=0;i--)
    {
        for(int j=0;j<78;j++)
        {
            if(i==13)printf("-");
            else if(i>13&&x[j]<=i)cout<<" ";
            else if(i<13&&x[j]>=i)cout<<" "; 
            else cout<<"*";
        } 
        cout<<endl;
    }
    
    
    system("pause");
    return 0;
}





