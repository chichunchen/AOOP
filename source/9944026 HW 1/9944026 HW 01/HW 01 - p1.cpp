#include <iostream>

using namespace std;

void showbits(int n)
{
    int temp=0;//�p��G�i���ƪ��Ȧs�Ʀr
    int count=0;//�p��mask�̤j�q�ĴX��}�l����1���Ʀr
    int mask=1;//�B�n�Ϊ��Ʀr

    temp=n;//�Ȧs�ǤJ��input

    //�p�⦹�Ʀr�ন�G�i���A�̥��䪺1�O�쩳�X��A��count���p��
    for(count=0;temp>1;count++)
    {
        temp=temp>>1;
    }

    //�Nmask���������X���̤j���
    for(int i=0;i<count;i++)
    {
        mask=mask<<1;
    }

    //�}�l���G�i�쪺��ܡAmask�C�����@��N���@���P�_�A�u�n���O0�N���1�A�Ϥ��h���0
    while(mask>0)
    {
        if((mask&n)==0)
            cout<<0;
        else
            cout<<1;

        mask=mask>>1;
    }
}

int main()
{
    int input;//�ŧi�ϥΪ̿�J���Ʀr

    cout<<"Enter a number:";
    cin>>input;

    showbits(input);//�I�s�禡showbits


    system("pause");
    return 0;
}
