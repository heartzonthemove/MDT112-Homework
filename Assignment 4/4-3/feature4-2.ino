#define CURRENT_YEAR 2020

int yourAge(int yearInCE) 
{
    yearInCE = CURRENT_YEAR - yearInCE;
    return yearInCE;    
}
