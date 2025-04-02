/*
    Author: Rodrigo Andrade
    Date: 02.04.25
    Exercise: VET - Whindersson Nunes
*/

#include <iostream>

using namespace std;

int main() {
    // Reading the number of videos for analysis
    int video_num;
    cin >> video_num;

    // Creating a vector to store the views of each video.
    int videos[1000];

    // Reading and storing the views in videos vector.
    int views;
    for (int i = 0; i < video_num; i++) {
        cin >> views;
        videos[i] = views;
    }

    // Creating variables for storing the number of videos above 10 M views and below 10 M views.
    int above_10 = 0;
    int below_10 = 0;

    // Counting each video from the videos vector that has less or more than 10 M views.
    int video_views;
    for (int j = 0; j < video_num; j++) {
        video_views = videos[j];
        // 10 million
        if (video_views < 1E7) {
            below_10 += 1;
        }else {
            // * Or equal
            above_10 += 1;
        }
    }

    // Displaying the number of videos with more than 10 M views and fewer than 10 M views.
    cout << above_10 << " video(s) com mais de 10M views" << endl;
    cout << below_10 << " video(s) com menos de 10M views" << endl;

    return 0;
}
