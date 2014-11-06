#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//因為不知道總共的結果會有幾個，所以用linked list 來儲存result的結果
struct list
{
    int result;
    struct list* next;
};

int main()
{
    int n;//宣告陣列大小
    int mask=1;//遮罩

    list* head=NULL;
    list* current=NULL;
    list* prev=NULL;


    do
    {
        cout<<"Enter the pile! :";
        cin>>n;

        if(n==0)
            break;

        int num[n];//宣告一個陣列，大小為n
        int result=0;

        cout<<"Enter the number of "<<n<<" pile(s)! :";//輸入有幾堆
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }

        int result_xor=0;
        result_xor=num[0];

        for(int i=1;i<n;i++)//用result_xor儲存每個數字的XOR的結果
        {
            result_xor^=num[i];
        }

        if(result_xor==0)//如果XOR的結果是0，表示處於輸的狀態，所以result為0
            result=0;
        else if(result_xor!=0)//當XOR的結果不是0時，開始做計算
        {
            //以下是計算mask得向左移動幾單位
            int temp=0;
            int count=0;
            temp=result_xor;
            for(count=0;temp>1;count++)
            {
                temp=temp>>1;
            }

            //找到result_xor最左位的1是第幾位後，用result儲存那位是1的石堆有幾個

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
