#include <iostream>
#include <math.h>
using namespace std;

#define MAXK            13

int main()
{
    freopen("isbn.in","r",stdin);
    freopen("isbn.out","w",stdout);

    //0-670-82162-4

    char isbn[MAXK],ch;
    scanf("%s",isbn);

    int i=0,j=0,isbn_end=0;
    int k=0;//记录到第几个‘-’
    while(1)
    {
        ch=isbn[i];
        if(k==3)
            break;
        if(ch!='-')
        {
            j=j+1;
            isbn_end=isbn_end+int(ch-'0')*j;
        }
        else
        {
            k++;
        }
        i++;
    }
    //printf("%d",isbn_end);
    int chk=int(isbn[12]-'0');
    if(isbn_end%11==chk)
    {
        cout<<"Right";
    }
    else
    {
        isbn_end = isbn_end%11;
        if(isbn_end==10)
            isbn[12]='X';
        else
            isbn[12]=isbn_end+'0';
        i=0;
        ch='l';
        while(1)
        {
            if(ch=='\0')
            {
                break;
            }
            ch=isbn[i];
            cout<<isbn[i];
            i++;
        }
    }
    cout<<endl;
    fclose(stdout);
    return 0;
}
