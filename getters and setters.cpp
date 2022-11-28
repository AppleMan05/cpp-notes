#include<iostream>

class Movie{
    private: //any code in private is private, not accessible
        std::string rating;
    public:                                 //any code from outside can access public code.
        std::string title;
        std::string director;
        
        Movie(std::string aTitle, std::string aDirector, std::string aRating){
            title = aTitle;
            director = aDirector;
            setrating(aRating);      //i still have access to private rating variable as its still in the function
        }
        void setrating(std::string aRating){  //any time we set rating anywhere in the code, it HAS to go through this function. This is where i will limit what ratings are allowed.
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" ||aRating == "R" ||aRating == "NR" ){
                rating = aRating;
            }
            else{
                std::cout<<"bro pls send a valid rating"<<std::endl;
                rating = "NR";
            }
        }
        std::string getrating(){
            return rating;
        }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    //cout<<avengers.rating;       //wont work as its a private variable
    std::cout<< avengers.getrating()<<std::endl;
    avengers.setrating("dog");
    std::cout<< avengers.getrating()<<std::endl;
    return 0;
}