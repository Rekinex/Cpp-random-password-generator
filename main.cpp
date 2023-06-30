#include <iostream>

using namespace std;

void male()
{
   char tab[24] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'w', 'y', 'z'};
    int i,j,k,l,m;
    //Jeden znak
    for(i=0;i<24;i++)
    {
        cout<<tab[i]<<endl;
    }
    //----------------------------------------------------
    //dwa znaki
    for(i=0;i<24;i++)
    {
        for(j=0;j<24;j++)
        {
           cout<<tab[i]<<tab[j]<<endl;
        }
    }
    //----------------------------------------------------
    //trzy znaki
    for(i=0;i<24;i++)
    {
        for(j=0;j<24;j++)
        {
           for(k=0;k<24;k++)
           {
               cout<<tab[i]<<tab[j]<<tab[k]<<endl;
           }
        }
    }
    //----------------------------------------------------
    //cztery znaki
    for(i=0;i<24;i++)
    {
        for(j=0;j<24;j++)
        {
           for(k=0;k<24;k++)
           {
               for(l=0;l<24;l++)
               {
                  cout<<tab[i]<<tab[j]<<tab[k]<<tab[l]<<endl;
               }
           }
        }
    }
    //---------------------------------------------------
    //piec znakow
    for(i=0;i<24;i++)
    {
        for(j=0;j<24;j++)
        {
           for(k=0;k<24;k++)
           {
               for(l=0;l<24;l++)
               {
                  for(m=0;m<24;m++)
                  {
                    cout<<tab[i]<<tab[j]<<tab[k]<<tab[l]<<tab[m]<<endl;
                  }
               }
           }
        }
    }
    //------------------------------------------------------
}
void duze()
{
    char tab[48] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'w', 'y', 'z',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'W', 'Y', 'Z'};
    int i,j,k,l,m;
    //Jeden znak
    for(i=0;i<48;i++)
    {
        cout<<tab[i]<<endl;
    }
    //----------------------------------------------------
    //dwa znaki
    for(i=0;i<48;i++)
    {
        for(j=0;j<48;j++)
        {
           cout<<tab[i]<<tab[j]<<endl;
        }
    }
    //----------------------------------------------------
    //trzy znaki
    for(i=0;i<48;i++)
    {
        for(j=0;j<48;j++)
        {
           for(k=0;k<48;k++)
           {
               cout<<tab[i]<<tab[j]<<tab[k]<<endl;
           }
        }
    }
    //----------------------------------------------------
    //cztery znaki
    for(i=0;i<48;i++)
    {
        for(j=0;j<48;j++)
        {
           for(k=0;k<48;k++)
           {
               for(l=0;l<48;l++)
               {
                  cout<<tab[i]<<tab[j]<<tab[k]<<tab[l]<<endl;
               }
           }
        }
    }
    //---------------------------------------------------
    //piec znakow
    for(i=0;i<48;i++)
    {
        for(j=0;j<48;j++)
        {
           for(k=0;k<48;k++)
           {
               for(l=0;l<48;l++)
               {
                  for(m=0;m<48;m++)
                  {
                    cout<<tab[i]<<tab[j]<<tab[k]<<tab[l]<<tab[m]<<endl;
                  }
               }
           }
        }
    }
    //------------------------------------------------------
}
void znaki()
{
    char tab[88] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'w', 'y', 'z',
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'W', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    '`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '-', '=', '+', '[', '{', ']', '}', ';', ':', '"', '|', ',', '<', '.', '>', '/', '?'};
    int i,j,k,l,m;
    //Jeden znak
    for(i=0;i<88;i++)
    {
        cout<<tab[i]<<endl;
    }
    //----------------------------------------------------
    //dwa znaki
    for(i=0;i<88;i++)
    {
        for(j=0;j<88;j++)
        {
           cout<<tab[i]<<tab[j]<<endl;
        }
    }
    //----------------------------------------------------
    //trzy znaki
    for(i=0;i<88;i++)
    {
        for(j=0;j<88;j++)
        {
           for(k=0;k<88;k++)
           {
               cout<<tab[i]<<tab[j]<<tab[k]<<endl;
           }
        }
    }
    //----------------------------------------------------
    //cztery znaki
    for(i=0;i<88;i++)
    {
        for(j=0;j<88;j++)
        {
           for(k=0;k<88;k++)
           {
               for(l=0;l<88;l++)
               {
                  cout<<tab[i]<<tab[j]<<tab[k]<<tab[l]<<endl;
               }
           }
        }
    }
    //---------------------------------------------------
    //piec znakow
    for(i=0;i<88;i++)
    {
        for(j=0;j<88;j++)
        {
           for(k=0;k<88;k++)
           {
               for(l=0;l<88;l++)
               {
                  for(m=0;m<88;m++)
                  {
                    cout<<tab[i]<<tab[j]<<tab[k]<<tab[l]<<tab[m]<<endl;
                  }
               }
           }
        }
    }
    //------------------------------------------------------
}

int main()
{
    int x;
    cout<<"1- male litery, 2- male i duze liter, 3- male,duze litery, cyfry i znaki, 0- koniec"<<endl;
    cin>>x;
    while(x!=0)
    {
      switch(x)
      {
      case 1:
        male();
        break;
      case 2:
        duze();
        break;
      case 3:
        znaki();
        break;
      }
    }

    return 0;
}
