#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int n, t, size, i ;
    char ops[303], input[303], current;
    cin >> n;
    for( ; n> 0 ; n--)
    {
        t = 0;
        memset(input, 0, 303);
        memset(ops, 0, 303);

        /* Reads the user input and put it in () */
        input[0] = '(';
        scanf(" %[^\n]%*c", input+1);
        size = strlen(input);
        input[size++] = ')';

        for( i = 0 ; input[i] != '\0' && i < 303 ; i++)
        {
            switch(input[i])
            {
                case '(':
                    ops[t++] = input[i];
                    break;
                case ')':
                    while( (current = ops[--t]) != '(' )
                       cout <<current;
                    break;
                case '+':
                case '-':
                    while( (current = ops[t-1]) != '(' )
                    {
                        cout <<current;
                        t--;
                    }
                    ops[t++] = input[i];
                    break;
                case '*':
                case '/':
                    while( (current = ops[t-1]) != '(' && current != '+' && current != '-')
                    {
                       cout << current;
                        t--;
                    }
                    ops[t++] = input[i];
                    break;
                case '^':
                    while( (current = ops[t-1]) != '(' && current != '+' && current != '-' && current != '*' && current != '/'  )
                    {
                        cout << current;
                        t--;
                    }
                    ops[t++] = input[i];
                    break;
                default:cout << input[i];
            }
        }  cout << "\n";
    }
}

