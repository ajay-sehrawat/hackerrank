//Drawing Book
#include <iostream>
using namespace std;
int main()
{
    int no_pages;  //No of pages
    cin>>no_pages;
    int page;      //page to reach to
    cin>>page;

    int middle;   //middle page
    int flip=0;  //pages to flip
    middle = no_pages/2;   
    if ( page<=middle)
    {
        flip = page/2;
    }
    else
    flip = (no_pages-page)/2;
    cout<<flip;
}

