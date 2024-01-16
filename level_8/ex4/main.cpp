#include <iostream>
#include <boost/random.hpp>
#include <map>

using namespace std;


int main(){
    // Throwing dice.
    // Mersenne Twister.
    boost::random::mt19937 myRng;
    // Set the seed.
    myRng.seed(static_cast<boost::uint32_t> (std::time(0))); // Uniform in range [1,6]
    boost::random::uniform_int_distribution<int> six(1,6);

    map<int, long> statistics; // Structure to hold outcome + frequencies 
    int outcome; // Current outcome
    
    int total_trials;
    cout << "How many trials? ";
    cin >> total_trials;

    for(int i = 0; i < total_trials; i++){
        statistics[six(myRng)]++;
    }
    map<int, long>::iterator i;

    for(i = statistics.begin(); i != statistics.end(); i++){
        cout << "Trial " << i->first << " has " << (i->second/(double)total_trials)*100
        << "% of outcomes" << endl;
    }

    return 0;
}