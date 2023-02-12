#include <bits/stdc++.h>
using namespace std;

string call_(string so)
{
    string name = "";
    switch (so[0])
    {
    case '1':
        name += "one hundred ";
        break;
    case '2':
        name += "two hundred ";
        break;
    case '3':
        name += "three hundred ";
        break;
    case '4':
        name += "four hundred ";
        break;
    case '5':
        name += "five hundred ";
        break;
    case '6':
        name += "six hundred ";
        break;
    case '7':
        name += "seven hundred ";
        break;
    case '8':
        name += "eight hundred ";
        break;
    case '9':
        name += "nine hundred ";
        break;
    default:
        break;
    }
    switch (so[1])
    {
    case '1':
    {
        switch (so[2])
        {
        case '0':
            name += "ten";
            return name;
            break;
        case '1':
            name += "eleven ";
            return name;
            break;
        case '2':
            name += "twelve ";
            return name;
            break;
        case '3':
            name += "thirteen ";
            return name;
            break;
        case '4':
            name += "fourteen ";
            return name;
            break;
        case '5':
            name += "fifteen ";
            return name;
            break;
        case '6':
            name += "sixteen ";
            return name;
            break;
        case '7':
            name += "seventeen ";
            return name;
            break;
        case '8':
            name += "eighteen ";
            return name;
            break;
        case '9':
            name += "nineteen ";
            return name;
            break;
        default:
            break;
        }
    }
    case '2':
        name += "twenty-";
        break;
    case '3':
        name += "thirty-";
        break;
    case '4':
        name += "forty-";
        break;
    case '5':
        name += "fivety-";
        break;
    case '6':
        name += "sixty-";
        break;
    case '7':
        name += "seventy-";
        break;
    case '8':
        name += "eighty-";
        break;
    case '9':
        name += "ninety-";
        break;
    default:
        break;
    }
    switch (so[2])
    {
    case '1':
        name += "one ";
        break;
    case '2':
        name += "two ";
        break;
    case '3':
        name += "three ";
        break;
    case '4':
        name += "four ";
        break;
    case '5':
        name += "five ";
        break;
    case '6':
        name += "six ";
        break;
    case '7':
        name += "seven ";
        break;
    case '8':
        name += "eight ";
        break;
    case '9':
        name += "nine ";
        break;
    default:
        break;
    }
    return name;
}

int main()
{
    string n;
    string name;
    cin >> n;
    if (n[0] == '-')
    {
        n.erase(n.begin());
        name = "negative ";
    }
    else
    {
        name = "";
    }
    int l = n.length();
    int r = l % 3;
    if (r != 0)
    {
        for (int i = 0; i < 3 - r; i++)
        {
            n = "0" + n;
        }
    }
    l = n.length();
    if (l / 3 == 1)
    {
        name += call_(n.substr(l - 3, 3));
        cout << name;
    }
    else if (l / 3 == 2)
    {
        name += call_(n.substr(l - 6, 3)) + "thousand " + call_(n.substr(l - 3, 3));
        cout << name;
    }
    else if (l / 3 == 3)
    {
        name += call_(n.substr(l - 9, 3)) + "million " + call_(n.substr(l - 6, 3)) + ((call_(n.substr(l - 6, 3)) == "") ? "" : "thousand ") + call_(n.substr(l - 3, 3));
        cout << name;
    }
    system("pause");
}
