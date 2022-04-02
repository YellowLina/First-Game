#include <iostream>
void PrintIntrodution()
{
    std::cout <<"\n\nYou need a new coffee table\n Just trust us you do\n Heading to the tables store you relaize oh no!\n You forgot your wallet at home you dummy!\n You walk in to find your roomate leading a dark coven and sacrificing a goat (Sorry, I forgot to say you live with a witch who leads dark covens and sacrifices goats.)\n You relaize, back from your room that THEY HAVE LEFT THE FUCKING WINDOW MESH THINGY THAT KEEPS THE MOSQUITUES OUT WIDE OPEN.\n You get pissed very pissed, so pissed in fact you grab the poor goat from your roomates hand and begin scolding them.\n opps you messed with the ritual.\n Your old coffee table is now concsous and knows about your plans to replace it. It has locked you in the room! You must now find the code to get out the room (Why did you ever think getting a keypad lock for your living room door was a good idea?)";
    std::cout<<"\nSuddenly some writings appear on the wall! Its satan helping the coffee table, hes pissed at you for interfering with his goat dinner, he was looking forward to it all week >:("<<std::endl;
}

void PrintLevel(int Difficulty)
{
    std::cout<<"Level:"<<Difficulty<<std::endl;
}

bool PlayGame(int Difficulty)
{
    PrintLevel(Difficulty);
    
    const int CodeA = rand() % 5;
    const int CodeB = rand() % 5;
    const int CodeC = rand() % 5;


    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    std::cout << std::endl;
    
    std::cout<<"+ There are 3 numbers in the code\n";
    std::cout<<"+ The codes add up to: "<< CodeSum<<std::endl;
    std::cout<<"+ The codes mutliply to: "<< CodeProduct<<std::endl;


    int GuessA, GuessB, GuessC;
    std::cin>>GuessA>>GuessB>>GuessC;

    int GuessSum= GuessA + GuessB + GuessC;
    int GuessProduct= GuessA * GuessB * GuessC;


    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout<<"\n\n\"ugh more math? Seriously?\"you say\n\"....Yes. Seriously.\" the bloodly wall says\n";
        std::cout<<"What? You thought this was gonna be easy? Keep Going hehehehehehe\n";
        return true;
    }
    else
    {
        std::cout<<"\"Looks like you need to take some more math classes (￣y▽￣)╭ Ohohoho.....\" says the wall\n";
        return false;
    }
}

int main()
{
    PrintIntrodution();

    int LevelDifficulty = 1;
    const int MaxLevel = 3;

    while (LevelDifficulty <= MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        } 
    }
    std::cout<<"\"Ugh, Dandila (what a werid name you have) hmmm Smartypants, I am getting bored, Fine. I will let you out of the room (╯°□°）╯︵ ┻━┻\"says the wall\n";
    std::cin; 
    return 0;
}
