#include<iostream>
#include<string>

using namespace std;

    const int pen{10};
    const int marker{20};
    const int eraser={30};
    const int rectangle={40};
    const int circle{50};
    const int ellipse{60};

int main(){

    int tool {eraser};

    switch (tool)
    {
    case pen :{
        cout<<"Active tool is pen" <<endl;
    }
        break;// break creates a literal break of texts

            case marker :{
        cout<<"Active tool is marker" <<endl;
    }
        break;

            case eraser :{
        cout<<"Active tool is eraser" <<endl;
    }
        break;

            case rectangle :{
        cout<<"Active tool is rectangle" <<endl;
    }
        break;

            case circle :{
        cout<<"Active tool is circle" <<endl;
    }
        break;

            case ellipse :{
        cout<<"Active tool is ellipse" <<endl;
    }
        break;
    
    default:{
        cout<<"No match found";
    }
    
        break;
    }

       cout<<"Moving on"<<endl;
       

    return 0;
}


