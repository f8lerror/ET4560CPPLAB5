#include <iostream>

using namespace std;

struct Moviedata
{

    string movieTitle;
    string movieDirector;
    int yearReleased;
    int runningTime;
    string productionCost;
    string firstYearRevenue;
};

void insertData(Moviedata *object,string title, string director, int year, int running, string productionCost, string firstYearRevenue);
void printData(Moviedata *object);

int main()
{
    Moviedata info;

    insertData(&info,"The Hangover", "Todd Phillips", 2009, 99, "35,000,000 Monies", "44,979,319 Monies");

    cout << "\nHere is the data for the movie\n";
    printData(&info);

    cout << endl << endl;

    return 0;
}
void insertData(Moviedata *object,string title, string director, int year, int running, string cost, string revenue)
{
    object->movieTitle=title;
    object->movieDirector=director;
    object->yearReleased=year;
    ((*object).runningTime)=running;
    object->productionCost=cost;
    object->firstYearRevenue=revenue;

}

void printData(Moviedata *object)
{
    cout << "Movie Tittle: " << object->movieTitle << endl;
    cout << "The Movies Director: " << object->movieDirector << endl;
    cout << "The year the movie was released: " << object->yearReleased <<endl;
    cout << "The running time of the movie in minutes: " << object->runningTime << endl;
    cout << "The Production cost of the movie: $" << object->productionCost << endl;
    cout << "The movies first year revenue worldwide: $" << object->firstYearRevenue << endl;

}