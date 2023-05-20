#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<stdlib.h>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
void menu(){

    m:
    cout<<"    <>    <>      <><>        <>    <>     <>>>>>>     <>      <>     <><>      <>    <>     "<<endl;
    cout<<"    <>    <>     <>  <>       <>>>  <>    <>     <>    <>>>  <<<>    <>  <>     <>>>  <>     "<<endl;
    cout<<"    <><<>><>    <><<>><>      <> <> <>    <>           <> <<>> <>   <><<>><>    <> <> <>     "<<endl;
    cout<<"    <>    <>   <>      <>     <>  <<<>    <>   <<<<    <>      <>  <>      <>   <>    <>     "<<endl;
    cout<<"    <>    <>  <>        <>    <>    <>      <>>>>      <>      <> <>        <>  <>    <>     "<<endl;  
    cout<<"                                                                                             "<<endl;
    cout<<"                                                                                             "<<endl;
    cout<<"            -------------                                                                    "<<endl;
    cout<<"            |           |                                                                    "<<endl;
    cout<<"            |           0                                                                    "<<endl;
    cout<<"            |          /|\\                                                                   "<<endl;
    cout<<"            |           :                                                                    "<<endl;
    cout<<"            |          / \\                                                                   "<<endl;
    cout<<"            |                                                                                "<<endl;
    cout<<"  __________|_________________                                                             "<<endl;
    cout<<" /          :                /:                                                              "<<endl;
    cout<<"|                           / :                                                              "<<endl;
    cout<<"|__________________________/  :                                                              "<<endl;
    cout<<"|                            /                                                               "<<endl;
    cout<<"|___________________________/                                                                "<<endl;
    cout<<"                                                                                             "<<endl;
    cout<<"                                                                                             "<<endl;
    cout<<"                                        @Menu@                                               "<<endl;
    cout<<"                                   1)  Play Game                                             "<<endl;
    cout<<"                                   2)  Game History                                          "<<endl;
    cout<<"                                   3)  Quit                                                  "<<endl;
    cout<<"                                                                                             "<<endl;
    cout<<"                                                                                             "<<endl;
    int choice;
    cout<<"                     Press Your Choice: ";
    cin>>choice;
    switch(choice){
        case 1:
    cout<<"                     Your have selected to play the Hangman Game                              "<<endl<<endl;
    void play();
    play();
    break;
        case 2:
    cout<<"                     Your game history is:                                                     "<<endl<<endl;
    void history();
    history();
    break;
    case 3:
    cout<<"                     Sorry to hear......                                                       "<<endl<<endl<<endl;
    exit(0);
    break;
    default:
    cout<<"                     Invalid Choice. Please select from 1-2-3 to continue.....                 "<<endl<<endl;

    cout<<endl<<endl;
    goto m;
    }
     
}


void play(){
    char choice='y';
    while(choice!='n'){
    c:
    string p1,p2;
    char guess1,guess;
    string word,word1;
    int wrong1=0,wrong=0;
    string used="",used1="";
    const int max_move1=8,max_move=8;
    fstream s;
   
            s.open("history.txt",ios::out|ios::app);
        


    cout<<"                                                                                            "<<endl;
    cout<<"                                        @Game@                                               "<<endl;
    cout<<"                                     Enter 'Player 1' name: ";
    cin>>p1;
    cout<<endl<<endl;
    cout<<"                                     Enter 'Player 2' name: ";
    cin>>p2;         
    cout<<endl<<endl;                                                      
    
    cout<<"                                                                                            "<<endl;
    cout<<"                                                                                            "<<endl;
    
    cout<<"                               "<<p1<<" choose any word, which "<<p2<<" have to guess:   ";
    cin>>word;
    cout<<endl<<endl;
    string d(word.size(),'-');
    int g=1;
    while((wrong<max_move) &&(d!=word) &&(g<9)){
    cout<<"                               "<<p2<<" Guess the word, you have "<<(max_move-wrong)<<" moves left. "<<endl<<endl;
    cout<<"                               "<<p2<<" Your '"<<g <<"' guess: ";
    cin>>guess;
    cout<<endl;
    transform(word.begin(), word.end(), word.begin(), ::tolower);

   guess=tolower(guess);


    if(used.find(guess) !=string::npos){
    cout<<"                                "<<p2<<" you have already guessed "<< guess<<endl<<endl;
    continue;
    }
    
    used +=guess;
            cout<<"                           "<<" Sofar, the letter is : "<<d<<". "<<endl<<endl;
        cout<<"                               "<<" the letter you choose is: "<<used<<" "<<endl<<endl;


    if(word.find(guess)!=string::npos){
			for(int i=0;i<word.size();i++){
				if(word[i]==guess){
					d[i]=guess;
				}
			}
			
		}
        else
        {
    cout<<"                                 "<<p2<<" sorry, this is not in the word."<<endl<<endl;

        }
        
        g++;
        wrong++;
    }
    if(max_move==wrong){
    cout<<"                                 "<<p2<<" you have lose the game and have hanged..."<<endl<<endl;
    s<<p2<<" have lose the game "<<endl<<endl;
    s.close();



      cout<<"                                                                                             "<<endl;
    cout<<"            -------------                                                                    "<<endl;
    cout<<"            |           |                                                                    "<<endl;
    cout<<"            |           0                                                                    "<<endl;
    cout<<"            |          /|\\                                                                   "<<endl;
    cout<<"            |           :                                                                    "<<endl;
    cout<<"            |          / \\                                                                   "<<endl;
    cout<<"            |                                                                                "<<endl;
    cout<<"  __________|_________________                                                             "<<endl;
    cout<<" /          :                /:                                                              "<<endl;
    cout<<"|                           / :                                                              "<<endl;
    cout<<"|__________________________/  :                                                              "<<endl;
    cout<<"|                            /                                                               "<<endl;
    cout<<"|___________________________/                                                                "<<endl;
    cout<<"                                                                                             "<<endl;
    cout<<"                                                                                             "<<endl;
    cout<<"      <>  <>     << >>      <>    <>      <>          << >>       <><>>>     <><><>                      "<<endl;
    cout<<"       <><>    <<     >>    <>    <>      <>        <<     >>   <<           <>                                    "<<endl;
    cout<<"        <>     <<     >>    <>    <>      <>        <<     >>      >>>>      <>>>>>                                        "<<endl;
    cout<<"        <>       << >>        <><>        <>>>>>>     << >>           >>     <>                                       "<<endl;
    cout<<"                                                                <<<><>       <>>>>>>                                     "<<endl;







    cout<<"                                 The word is: "<<word<<endl;
    }
    else
    {
    cout<<"      <<<<       << >>      <>    <>    >>>>>     <>>>>>>        <><>       <><><><><>     <><>>>                "<<endl;
    cout<<"     <<        <<     >>    <>>>  <>   <>         <>   <        <>  <>          <>        <<                 "<<endl;
    cout<<"     <<        <<     <<    <>  >>>>   <>     >>  <>  >_       <> <> <>         <>           >>>>                             "<<endl;
    cout<<"       <<<       << >>      <>    >>     <>>>>    <>     >    <>      <>        <>               >>               "<<endl;
    cout<<"                                                                                           <<<><>               "<<endl<<endl;
    cout<<"                            "<<p2<<" Congratulation, you have been guesses the word which is: "<<d<<endl;
    s<<p2<<" have won the game "<<endl;
    s.close();






    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    //Player 2
    cout<<"                               Now, its time to play "<<p1<<endl;
    cout<<"                               "<<p2<<" choose any word, which "<<p1<<" have to guess: ";
    
    cin>>word1;
    cout<<endl;
    string d1(word1.size(),'-');
    int g1=1;
    while((wrong1<max_move1) &&(d1!=word1) &&(g1<9)){
    cout<<"                               "<<p1<<" Guess the word, you have "<<(max_move1-wrong1)<<" moves left. "<<endl<<endl;
    
    cout<<"                               "<<p1<<" Your '"<<g1 <<"' guess: ";
   
    cin>>guess1;
    cout<<endl;
    transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
    guess1=tolower(guess1);


    if(used1.find(guess1) !=string::npos){
    cout<<"                                "<<p1<<" you have already guessed "<< guess1<<endl<<endl;
    continue;
    }
    
    used1 +=guess1;
            cout<<"                           "<<" Sofar, the letter is : "<<d1<<". "<<endl<<endl;
        cout<<"                               "<<" the letter you choose is: "<<used1<<" "<<endl<<endl;


    if(word1.find(guess1)!=string::npos){
			for(int i=0;i<word1.size();i++){
				if(word1[i]==guess1){
					d1[i]=guess1;
				}
			}
			
		}
        else
        {
    cout<<"                                 "<<p1<<" sorry, this is not in the word."<<endl<<endl;

        }
        
        g1++;
        wrong1++;
    }
    if(max_move1==wrong1){
    cout<<"                                 "<<p1<<" you have lose the game and have hanged..."<<endl<<endl;
    s<<p1<<" have lose the game "<<endl<<endl;
    s.close();




    cout<<"                                                                                             "<<endl;
    cout<<"            -------------                                                                    "<<endl;
    cout<<"            |           |                                                                    "<<endl;
    cout<<"            |           0                                                                    "<<endl;
    cout<<"            |          /|\\                                                                   "<<endl;
    cout<<"            |           :                                                                    "<<endl;
    cout<<"            |          / \\                                                                   "<<endl;
    cout<<"            |                                                                                "<<endl;
    cout<<"  __________|_________________                                                             "<<endl;
    cout<<" /          :                /:                                                              "<<endl;
    cout<<"|                           / :                                                              "<<endl;
    cout<<"|__________________________/  :                                                              "<<endl;
    cout<<"|                            /                                                               "<<endl;
    cout<<"|___________________________/                                                                "<<endl;
    cout<<"                                                                                             "<<endl;
    cout<<"                                                                                             "<<endl;

    cout<<"      <>  <>     << >>      <>    <>      <>          << >>       <><>>>     <><><>                      "<<endl;
    cout<<"       <><>    <<     >>    <>    <>      <>        <<     >>   <<           <>                                    "<<endl;
    cout<<"        <>     <<     >>    <>    <>      <>        <<     >>      >>>>      <>>>>>                                        "<<endl;
    cout<<"        <>       << >>        <><>        <>>>>>>     << >>           >>     <>                                       "<<endl;
    cout<<"                                                                <<<><>       <>>>>>>                                     "<<endl;






    cout<<"                                 The word is: "<<word1<<endl;
    }
    else
    {
    cout<<"      <<<<       << >>      <>    <>    >>>>>     <>>>>>>        <><>       <><><><><>     <><>>>                "<<endl;
    cout<<"     <<        <<     >>    <>>>  <>   <>         <>   <        <>  <>          <>        <<                 "<<endl;
    cout<<"     <<        <<     <<    <>  >>>>   <>     >>  <>  >_       <> <> <>         <>           >>>>                             "<<endl;
    cout<<"       <<<       << >>      <>    >>     <>>>>    <>     >    <>      <>        <>               >>               "<<endl;
    cout<<"                                                                                           <<<><>               "<<endl<<endl;
    cout<<"                            "<<p1<<" Congratulation, you have been guesses the word which is: "<<d1<<endl;
    s<<p1<<" have won the game "<<endl<<endl;
    s.close();
    
    cout<<endl;
    cout<<endl;
}

cout<<"                                            Press n to go to main menu, press any key to play again:  ";
cin>>choice;
cout<<endl;
}
if(choice=='n'){
    menu();
    
}
cout<<endl<<endl;
}
void history(){
    fstream f;
    string str;
    char ch;
         cout<<"                                                                                             "<<endl;
     cout<<"                                                                                                "<<endl;
      cout<<"                                        @history@                                               "<<endl;
    cout<<endl<<endl;
    f.open("history.txt",ios::in);
    if(f.is_open()){
        while(f){
            getline(f,str);
            cout<<str<<endl;
        }
        cout<<endl<<endl;;
    }
  
  
    z:
    cout<<"                                         Press anykey to go to main menu: ";
                                                                                       
    cin>>ch;
    if(ch='n'){
        menu();
        
    }
    else{
        cout<<"                                      Invalid Responce                      "<<endl;
        goto z;
    }
}

int main(){
    menu();

    
    


    return 0;
}
