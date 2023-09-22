#include "Serializer.hpp"



Serializer::Serializer()
{
    
    std::cout << "Serializer's Default constructor was called" << std::endl;
}


Serializer::Serializer(const Serializer &obj)
{
    (void) obj;
    std::cout << "Serializer's Copy constructor was called" << std::endl;
}

Serializer&  Serializer::operator=(const Serializer &obj)
{
    (void) obj;
    std::cout << "Serializer's Copy asignment operator was called" << std::endl;
    
    return (*this);
}


Serializer::~Serializer(void)  
{
    std::cout << "Serializer's Destructor was called" << std::endl;
}



// Member Functions
int Serializer::validDot(std::string s)
{
    size_t i = s.find(".");
    if(i > s.length() - 1)
    {
        return 0; // There is no '.' in the string
    }
    if(i > 0 and i < s.length() - 1)
    {
        if (s.find(".", i + 1) < s.length())
        {
            return -1; // There is more than one '.' in the string, 
                        // and it is not right.
        }
        return 1; // There is only one '.' in the string 
                    //and it is not  the first or last 
                    //element of the string.
    }
    return -1; // There is a '.' in the string 
                    //as the first or  the last 
                    //element of the string,
                    // and it is not right.
}
int Serializer::validE(std::string s)
{
    size_t i = s.find("e");
    if(i > s.length() - 1)
    {
        return 0; // There is no 'e' in the string
    }
    if(i > 0 and i < s.length() - 1 and isdigit(s[i - 1]) and (isdigit(s[i + 1]) or s[i + 1] == '-'))
    {
        if (s.find("e", i + 1) < s.length())
        {
            return -1; // There is more than one 'e' in the string, 
                        // and it is not right.
        }
        return 1; // There is only one 'e' in the string 
                    //and it is not  the first or last 
                    //element of the string.
    }
    return -1; // There is a 'e' in the string 
                    //as the first or  the last 
                    //element of the string,
                    // and it is not right.
}

int Serializer::validF(std::string s)
{
    size_t i = s.find("f");
    if(i > s.length() - 1)
    {
        return 0; // There is no 'f' in the string
    }
    if(i == s.length() - 1 and isdigit(s[i - 1]))
    {
        return 1; // There is only one 'f' in the string, 
                    // in its right place: at the end and after a digit.
    }
    return -1; // There is a 'f' in the string 
                    //but it is not at the  end of string,
                    // or is not followed  by a digit
                    // and it is not right.
}

int Serializer::validSumbs(std::string s)
{
    size_t i = 0;
    while (i < s.length())
    {
        if(!((s[i] >= '0' and s[i] <= '9') or s[i] == '-' or s[i] == '.' or s[i] == 'e' or s[i] == 'f'))
        {
            return -1;
        }
        i++;
    }    
    return 0;
}

double Serializer::isValid(std::string s)
{
    // int i = 0;
    double minus = 1;
    // double num;
    if (s[0] == '-')
    {
        minus = -1;
        s = s.substr(1);
    }
    int eFlag = Serializer::validE(s);
    int dotFlag = Serializer::validDot(s);
    int fFlag = Serializer::validF(s);
    int sumbsFlag = Serializer::validSumbs(s);
    

    if (eFlag < 0 or fFlag < 0 or dotFlag < 0 or sumbsFlag < 0)
    {
        return 0; // Not Valid 
    }
    if(eFlag == 1)
    {
        int eIndex = s.find('e');
        std::string firstPart = s.substr(0, eIndex);
        std::string lastPart = s.substr(eIndex + 1);
        double f;
        double l;
        std::istringstream(firstPart) >> f;
        std::istringstream(lastPart) >> l;
        std::cout << " TtTTTT "<< firstPart << std::endl;
        return f * pow(10, l);
    }
    if(dotFlag == 1)
    {
        double f;
        std::istringstream(s) >> f;
        return f;
    }
    if(fFlag == 1)
    {
        std::string firstPart = s.substr(0, s.length() - 1);
        double f;
        std::istringstream(firstPart) >> f;
        return f;
    }    
    double f;
    std::istringstream(s) >> f;
    return f;
}

void Serializer::printAll(std::string c, std::string i, std::string f, std::string d)
{
    std::cout << "char:   " << c << std::endl;
    std::cout << "int:    " << i << std::endl;
    std::cout << "float:  " << f << std::endl;
    std::cout << "double: " << d << std::endl;
}

void Serializer::convert(std::string s)
{
    int in;
    std::string c = "impossible";
    std::string i = "impossible";
    std::string f = "impossible";
    std::string d = "impossible";
    if (s.length() == 1)
    {
        // std::istringstream(s) >> i;
        in = s[0];
        if(in < 32 or (in > 47 and in < 58) or in == 127)
        {
            c = "Non displayable";            
        }
        else
        {
            c = "'" + s + "'";
        }
        i = std::to_string(in);
        d = i + ".0";
        f = d + "f";
    }
    else if(s == "-inf" or s == "+inf" or s == "nan")
    {
        d = s;
        f = d + "f";
    }
    else if(s == "-inff" or s == "+inff" or s == "nanf")
    {
        f = s;
        d = f.substr(0, f.length() - 1);
    }

    double v = isValid(s);

    if(v != 0)
    {
        if(v <= INT_MAX and v >= INT_MIN)
        {
            int n = static_cast<int>(v);
            i = std::to_string(n);
            if(n > 31 and n < 127)
            {
                c = static_cast<char>(n);
                c = "'" + c + "'";
            }
            else if((n >= 0  and n < 32) or n == 127)
            {
                c = "Non Displayable";
            }
        }
        else 
        {
            i = "Out of INT Range!";
        }
        
        v = round(v * 10.0) / 10.0;
        d = std::to_string(v);
        d = d.substr(0, d.find(".") + 2); // To substract "000"-s at the end of double and left only one.
        f = d + "f";

    }
    Serializer::printAll(c, i, f, d);
}
    
    
