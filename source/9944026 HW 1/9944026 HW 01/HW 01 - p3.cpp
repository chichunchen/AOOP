#include <iostream>

using namespace std;

int main()
{
    int survey[20];//按照題目要求，做一20格的陣列

    for(int i=0;i<20;i++)//分別輸入身分、語言、類別，共20組資料
    {
        int status=1,language=1,category=1;
        int s=0,l=0,c=0;
        cout<<"What class? 0:Upper class 1:Middle class 2:Lower class :";
            cin>>s;
        cout<<"What language? 3:English 4:Chinese 5:Regional language :";
            cin>>l;
        cout<<"What category? 6:Daily 7:Supplement 8:Tabloid :";
            cin>>c;

        survey[i]=(status<<s)+(language<<l)+(category<<c);
    }

    //開始作計次，count1是計算English daily的人數，只要有輸入3和6就算在內，因此&72
    int count1=0;
    for(int i=0;i<20;i++)
    {
        if((survey[i]&72)==72)
            count1+=1;
    }

    //count2是計算upper class who read tabloid的人數，只要有輸入0和8就算在內，因此&257
    int count2=0;
    for(int i=0;i<20;i++)
    {
        if((survey[i]&257)==257)
            count2+=1;
    }

    //count3是計算regional language readers 的人數，只要有輸入5即算在內，因此&32
    int count3=0;
    for(int i=0;i<20;i++)
    {
        if((survey[i]&32)==32)
            count3+=1;
    }

    //作顯示
    cout<<"English daily : "<<count1<<endl;
    cout<<"upper class who read tabloid : "<<count2<<endl;
    cout<<"regional language readers : "<<count3<<endl;

    system("pause");
    return 0;
}
