#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//�]�������D�`�@�����G�|���X�ӡA�ҥH��linked list ���x�sresult�����G
struct list
{
    int result;
    struct list* next;
};

int main()
{
    int n;//�ŧi�}�C�j�p
    int mask=1;//�B�n

    list* head=NULL;
    list* current=NULL;
    list* prev=NULL;


    do
    {
        cout<<"Enter the pile! :";
        cin>>n;

        if(n==0)
            break;

        int num[n];//�ŧi�@�Ӱ}�C�A�j�p��n
        int result=0;

        cout<<"Enter the number of "<<n<<" pile(s)! :";//��J���X��
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }

        int result_xor=0;
        result_xor=num[0];

        for(int i=1;i<n;i++)//��result_xor�x�s�C�ӼƦr��XOR�����G
        {
            result_xor^=num[i];
        }

        if(result_xor==0)//�p�GXOR�����G�O0�A��ܳB��骺���A�A�ҥHresult��0
            result=0;
        else if(result_xor!=0)//��XOR�����G���O0�ɡA�}�l���p��
        {
            //�H�U�O�p��mask�o�V�����ʴX���
            int temp=0;
            int count=0;
            temp=result_xor;
            for(count=0;temp>1;count++)
            {
                temp=temp>>1;
            }

            //���result_xor�̥��쪺1�O�ĴX���A��result�x�s����O1���۰靈�X��

            for(int i=0;i<n;i++)
            {
                if((num[i]&(mask<<count))!=0)
                    result++;
                else
                    continue;
            }

        }

        current=(list*)malloc(sizeof(list));
        current->result=result;
        current->next = NULL;

        if(head == NULL)
        {
            head = current;
            prev = current;
        }
        else
        {
            prev->next = current;
        }
        prev = current;


    }while(n!=0);

    current=head;
    cout<<(current->result)<<endl;
    while(current->next!=NULL)
    {
        current=current->next;
        cout<<(current->result)<<endl;
    }

    system("pause");
    return 0;
}
