#include <print>
#include <iostream>
using namespace std;


int main(){
    const int NUM_OF_STAR = 75;
    int currentStars = 0;
    int freshRate = 0;
    int squishRate = 0;
    int colorRate = 0;
    int smellRate = 0;
    char fuzzyRate = 'N';
    int fuzzy = 0;
    const int DIE = 1000000;
    int count = 0;

    string fruit = "a";
    print("Upload a picture of your fruit: ");
    cin >> fruit;
    if (fruit != "PIGEONHOLEPRINCIPLE"){
        println("You chose a(n) {}", fruit);
    } else {
        while (count < DIE){
            print("PIGEONHOLE PRINCIPLE");

        }
    }
    println("On a scale of 1-5, how squishy is your fruit? ");
    cin >> squishRate;


    println("On a scale of 1-5, how different is the color of your fruit? ");
    cin >> colorRate;
    

    println("On a scale of 1-5, how bad does your fruit smell?");
    cin >> smellRate;


    println("Are there any fuzzy spots on your fruit? Y/N");
    cin >> fuzzyRate;
    if (fuzzyRate == 'Y'){
        fuzzy = 1;
    } else if (fuzzyRate == 'N'){
        fuzzy = 0;
    }
    while (currentStars <= NUM_OF_STAR){
        print("*");
        currentStars++;
    }
}