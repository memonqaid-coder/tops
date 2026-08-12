#include<iostream>
#include<fstream>
using namespace std;
class content{
    public:
    string title;
    string platform;
    int views;
    string status;
};
int main(){
    int choice;
    content c;
    while (true){
        cout<<"<<<<<<<<<<Creator Dashboard Lite>>>>>>>>>>"<<endl;
        cout<<"1> Add Content"<<endl;
        cout<<"2> View Content"<<endl;
        cout<<"3> Edit Content"<<endl;
        cout<<"4> Delete Content"<<endl;
        cout<<"5> Exit"<<endl;
        cout<<"\nSelect an Option:"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                cout<<"Enter Title:";
                cin.ignore();
                getline(cin,c.title);
                cout<<"Enter Platform:";
                getline(cin,c.platform);
                cout<<"Enter Views:";
                cin>>c.views;
                cout<<"Enter Status";
                cin>>c.status;
                ofstream fout ("context.txt",ios::app);
                fout<<c.title<<"|"<<c.platform<<"|"<<c.views<<"|"<<c.status<<endl;
                fout.close();
                break;
            }
            case 2:
            {
                string data;
                ifstream fin("context.txt");
                while (getline(fin,data))
                {
                    cout<<data<<endl;
                }
                fin.close();
                break;
            }
            case 3:
            {
                cin.ignore();
                string targetTitle;
                cout<<"Enter title of content to edit:";
                getline(cin,targetTitle);
                ifstream fin ("context.txt");
                string line;
                while (getline(fin,line))
                {
                    string currentTitle;
                    cout<<line<<endl;
                    getline(fin,currentTitle,'|');
                    //currentTitle=trim(currentTitle);
                    if (currentTitle==line)
                    {
                        cout<<"\nRecord Found!!\n Enter New Details:\n";
                        cout<<"Enter New title:";
                        getline(cin,c.title);
                        cout<<"Enter New Platform:";
                        getline(cin,c.platform);
                        cout<<"Enter New Views:";
                        cin>>c.views;
                        cout<<"Enter New Status:";
                        cin>>c.status;
                        cin.ignore();
                        break;
                    }
                    fin.close();
                    break;
                }
               case 4:{
                cin.ignore();
                string targetTitle;
                cout<<"Enter Title Content To Delete:";
                getline(cin,targetTitle);
                ifstream fin("context.txt");
                

                }
                
            };
        }
    }
       
