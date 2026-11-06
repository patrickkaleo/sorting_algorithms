# SORTING ALGORITHMS FROM FIRST PRENCIPLES USING C++

- This repository contains well commented code exlpaining how each sorting algorith is implmeented, the Big O time complexity of the given algorithms and any associated overheads for a given algorith such as space complexity.

- Note that the repo uses docker for code compilation to remove the overhead associated with setting up an enviroment to run and test the code 
- Furthermore, gtest has been used to test each algorith and ensure that any updates made comply with the pre and post consditions for each algorithm;

- Enjoy learning from this, feel free to contibute 

# Environment setup

if you choose to run an compile the code outside of docker, then you will need to have the following installed
- g++
- make

else: 
    simpley run : docker compose up -d to build the image 
    docker compose run --rm run to run main 
    docker compose run --rm test to run tests 
    docker compose run --rm all to run all 