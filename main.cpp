/**
 * @authors Abubakari Sadik Osman & Halidu Mubashir
 * @date November 28, 2020
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void writeFinalOutputToFile(string filepath);
vector<vector<string>> readOutput(string filename);
void inputTextWriter(string filename);

class Airline {
    // Declaring instance variables.
    /**
     * @param airlineId
     * @param name
     * @param alias
     * @param IATA
     * @param ICAO
     * @param callsign
     * @param country
     * @param active
     */
private:
    string airlineId;
    string name;
    string alias;
    string IATA;
    string ICAO;
    string callsign;
    string country;
    string active;
public:
    // Constructor
    Airline(){};
    Airline(
            string airline_id, string airline_name,
            string airline_alias, string IATA,
            string ICAO, string call_sign,
            string country, string active) {
        this -> airlineId = airline_id;
        this -> name = airline_name;
        this -> alias = airline_alias;
        this -> IATA = IATA;
        this -> ICAO = ICAO;
        this -> callsign = call_sign;
        this -> country = country;
        this -> active = active;
    }

    // Getters
    string getAirlineId() {
        return this -> airlineId;
    }

    string getAirlineName() {
        return this -> name;
    }

    string getAirlineAlias() {
        return this -> alias;
    }

    string getAirlineIATA() {
        return this -> IATA;
    }

    string getAirlineICAO() {
        return this -> ICAO;
    }

    string getAirlineCountry() {
        return this -> country;
    }

    string getAirlineActive(){
        return this -> active;
    }
};

class Airport {
    // Declaring instance variables.
private:
    /**
     * @param airportID
     * @param airportName
     * @param city
     * @param country
     * @param IATA
     * @param ICAO
     * @param latitude
     * @param longitude
     */
    string Id;
    string name;
    string city;
    string country;
    string IATA;
    string ICAO;
    string latitude;
    string longitude;
public:
    // A constructor.
    Airport(){};
    Airport(string airport_Id, string airport_name, string city, string country, string IATA, string ICAO, string latitude, string longitude)
    {
        this -> Id = airport_Id;
        this -> name = airport_name;
        this -> city = city;
        this -> country = country;
        this -> IATA = IATA;
        this -> ICAO = ICAO;
        this -> latitude = latitude;
        this -> longitude = longitude;
    }

    // Getters
    /**
     * This function returns the airportID of the airport
     *
     * @return The Id
     */
    string getAirportID() {
        return this -> Id;
    }

    /**
     * This function returns the name of the airport
     *
     * @return The airport name.
     */
    string getAirportName() {
        return this -> name;
    }

    /**
     * This function returns the city of the airport.
     *
     * @return The city of the airport.
     */
    string getAirportCity() {
        return this -> city;
    }

    /**
     * This function returns the country of the airport
     *
     * @return The country of the airport.
     */
    string getAirportCountry() {
        return this -> country;
    }

    /**
     * This function returns the IATA code of the airport.
     *
     * @return The IATA code of the airport.
     */
    string getAirportIATA() {
        return this -> IATA;
    }

    /**
     * This function returns the ICAO code of the airport
     *
     * @return The ICAO code of the airport.
     */
    string getAirportICAO() {
        return this -> ICAO;
    }

    /**
     * If the latitude is not a number, set it to 0.00 and return it.
     *
     * @return The latitude of the airport.
     */
    double getAirportLatitude() {
        try {
            return stoi(this -> latitude);
        } catch (exception e) {
            this -> latitude = "0.00";
            return stoi(this -> latitude);
        }
    }

    /**
     * If the longitude is not a number, set it to 0.00 and return it
     *
     * @return The longitude of the airport.
     */
    double getAirportLongitude() {
        try {
            return stoi(this -> longitude);
        } catch (exception e) {
            this -> longitude = "0.00";
            return stoi(this -> longitude);
        }
    }
};

class Route {
private:
    // Declaring instance variables
    /**
     * @param airlineCode
     * @param airlineID
     * @param sourceAirport
     * @param sourceAirportID
     * @param destinationAirport
     * @param destinationAirportID
     * @param codeshare
     * @param stops
     */
    string airlineCode;
    string airlineID;
    string sourceAirport;
    string sourceAirportID;
    string destinationAirport;
    string destinationAirportID;
    string codeshare;
    string stops;
    string equipment;

    // A constructor.
public:
    Route(){};
    Route(string airlineCode,string airlineID,string sourceAirport,string sourceAirportID,
        string destinationAirport,string destinationAirportID,string codeshare,string stops, string equipment) {
        this -> airlineCode = airlineCode;
        this -> airlineID = airlineID;
        this -> sourceAirport = sourceAirport;
        this -> sourceAirportID = sourceAirportID;
        this -> destinationAirport = destinationAirport;
        this -> destinationAirportID = destinationAirportID;
        this -> codeshare = codeshare;
        this -> stops = stops;
        this -> equipment = equipment;
    }

    // Getters
    /**
     * This function returns the airline code of the flight
     *
     * @return The airlineCode
     */
    string getAirlineCode() {
        return this -> airlineCode;
    }

    /**
     * This function returns the airlineID of the flight
     *
     * @return The airlineID
     */
    string getAirlineID() {
        return this -> airlineID;
    }

    /**
     * This function returns the source airport of the flight
     *
     * @return The sourceAirport
     */
    string getSourceAirport() {
        return this -> sourceAirport;
    }

    /**
     * This function returns the source airport ID of the flight
     *
     * @return The sourceAirportID
     */
    string getSourceAirportID() {
        return this -> sourceAirportID;
    }

    /**
     * This function returns the destination airport of the flight
     *
     * @return The destination airport.
     */
    string getDestinationAirport() {
        return this -> destinationAirport;
    }

    /**
     * This function returns the destination airport ID of the flight
     *
     * @return The destinationAirportID
     */
    string getDestinationAirportID() {
        return this -> destinationAirportID;
    }

    /**
     * This function returns the codeshare of the flight
     *
     * @return The codeshare
     */
    string getCodeShare() {
        return this -> codeshare;
    }

    /**
     * This function returns the number of stops.
     *
     * @return The number of stops
     */
    string getStops() {
        return this -> stops;
    }

    /**
     * This function returns the equipment.
     *
     * @return equipment
     */
    string getEquipment() {
        return this -> equipment;
    }
};


// #include "ListOfAirlines.h"
#include <iostream>
#include <unordered_map>
#include <fstream>
#include <vector>

using namespace std;

/**
 * It reads in a CSV file, creates an ArrayList of Airline objects,
 * and returns the map of airlines
 */
class ListOfAirlines {

    /**
     * This function takes a filename as a parameter and returns a HashMap of
     * Airline objects
     *
     * @param filename the name of the file to be read
     * @return A HashMap of Airline objects.
     */
    unordered_map<string, Airline*> airlines;
    Airline *airline;
public:
    unordered_map<string, Airline*> mapsOfAirlines(string filename) {
        ifstream file;
        file.open(filename);

        string airlineId;
        string name;
        string alias;
        string IATA;
        string ICAO;
        string callsign;
        string country;
        string active;
        

        if (file.is_open()) {
            while (file.good()) {
                getline(file, airlineId, ',');
                getline(file, name, ',');
                getline(file, alias, ',');
                getline(file, IATA, ',');
                getline(file, ICAO, ',');
                getline(file, callsign, ',');
                getline(file, country, ',');
                getline(file, active, '\n');

                this -> airline = new Airline(airlineId, name, alias, IATA, ICAO, callsign, country, active);
                this -> airlines[airlineId] = this -> airline;
            }
            file.close();
        }
        else {
            cout << "FILE NOT FOUND" << endl;
        }

        return this -> airlines;
    }
};

class ListOfAirports {

    /**
     * This function takes a filename as a parameter and returns a HashMap of
     * Airport objects
     *
     * @param filename the name of the file to be read
     * @return A HashMap of Airport objects.
     */
    unordered_map<string, Airport*> airports;
    Airport *airport;
public:
    unordered_map<string, Airport*> mapsOfAirports(string filename) {
        
        ifstream file;
        file.open(filename);

        string id;
        string name;
        string city;
        string country;
        string IATA;
        string ICAO;
        string latitude;
        string longitude;
        

        if (file.is_open()) {
            while (file.good()) {
                getline(file, id, ',');
                getline(file, name, ',');
                getline(file, city, ',');
                getline(file, country, ',');
                getline(file, IATA, ',');
                getline(file, ICAO, ',');
                getline(file, latitude, ',');
                getline(file, longitude, '\n');

                this -> airport = new Airport(id, name, city, country, IATA, ICAO, latitude, longitude);
                this -> airports[id] = this -> airport;
            }
            file.close();
        }
        else {
            cout << "FILE NOT FOUND" << endl;
        }

        return this -> airports;
    }
};

class ListOfRoutes {
    /**
     * This function takes a filepath as a string and returns an ArrayList of Route
     * objects
     *
     * @param filepath the path to the file containing the routes
     * @return An ArrayList of Route objects.
     */
    unordered_map<string, Route*> routes;
    Route *route;
public:
    unordered_map<string, Route*> mapsOfRoutes(string filename) {
        
        vector<string> route_details;
        ifstream file;
        file.open(filename);

        string airlineCode;
        string airlineID;
        string sourceAirport;
        string sourceAirportID;
        string destinationAirport;
        string destinationAirportID;
        string codeshare;
        string stops;
        string equipment;
        

        if (file.is_open()) {
            while(file.good()) {
                getline(file, airlineCode, ',');
                getline(file, airlineID, ',');
                getline(file, sourceAirport, ',');
                getline(file, sourceAirportID, ',');
                getline(file, destinationAirport, ',');
                getline(file, destinationAirportID, ',');
                getline(file, codeshare, ',');
                getline(file, stops, ',');
                getline(file, equipment, '\n');


                this -> route = new Route(airlineCode, airlineID, sourceAirport, sourceAirportID, destinationAirport, destinationAirportID, codeshare, stops, equipment);
                string uniqueID = airlineCode + sourceAirport + destinationAirport;

                this -> routes[uniqueID] = this->route;

            }
            file.close();
        }
        else {
            cout << "FILE NOT FOUND" << endl;
        }

        return this->routes;
    }
};

class Node {
    // Declaring instance variables
private:
    Airport *airport;
    Node *parentAirport = NULL;

    // This is a constructor that takes in an airport object and sets the
    // airport to the airport object.
public:
    Node(Airport final) {
        this -> airport = &final;
    }

    // This is a constructor that takes in an airport object and a node object and
    // sets the
    // airport to the airport object and the parentAirport to the node object.
    Node(Airport final, Node parent){
        this -> airport = &final;
        this -> parentAirport = &parent;
    }

    /**
     * This function returns the airport of the flight
     *
     * @return The airport
     */
    Airport* getState() {
        return this -> airport;
    }

    Node* getParent() {
        return this -> parentAirport;
    }

    /**
     * This function returns an ArrayList of Airport objects that represent the path
     * from the final
     * airport to the end airport
     *
     * @return The solution path is being returned.
     */
    vector<Airport> solutionPath() {
        vector<Airport> successorAirports;
        successorAirports.push_back(*airport);

        Node* currentParent = parentAirport;

        while (!(currentParent == NULL)) {
            successorAirports.push_back(*currentParent -> airport);
            currentParent = currentParent -> parentAirport;
        }
        return successorAirports;
    }
};

#include <queue>
#include <deque>
#include <set>

class FindRoute {
    /**
     * Return the airport object that matches the city and country passed in.
     *
     * @param city    The city of the airport
     * @param country The country of the airport
     * @return The airport object is being returned.
     */
public:
    // Declaring the instance variables that will be used in the class.
    ListOfRoutes list_of_routes = ListOfRoutes();
    ListOfAirports list_of_airports = ListOfAirports();
    unordered_map<string, Route*> routes = list_of_routes.mapsOfRoutes("routes.csv");
    unordered_map<string, Airport*> airports = list_of_airports.mapsOfAirports("airports.csv");
    vector<vector<string>> paths = readOutput("input.csv");

    string startCity = paths[0][0];
    string startCountry = paths[0][1];
    string destinationCity = paths[1][2];
    string destinationCountry = paths[1][3];

    Airport sourceAirport(string city, string country) {
        Airport airport;
        for (auto temp : airports) {
            Airport *air = temp.second;
            if (air->getAirportCity().compare(city) == 0 && air->getAirportCountry().compare(country) == 0) {
                airport = *air;
            }
        }
        return airport;
    }

    /**
     * This function takes in a city and country and returns the airport object that
     * matches the city
     * and country
     *
     * @param city    The city of the destination airport
     * @param country The country of the airport
     * @return The airport object is being returned.
     */
    Airport destinationAirport(string city, string country) {
        Airport airport;
        for (auto temp : airports) {
            Airport *air = temp.second;
            if (air->getAirportCity().compare(city) == 0 && air->getAirportCountry().compare(country) == 0) {
                airport = *air;
            }
        }
        return airport;
    }

    /**
     * Given an airport, return a list of all airports that can be reached from that
     * airport
     *
     * @param airport The airport whose successors you want to find
     * @return The successors of the airport.
     */
    vector<Airport*> getSuccessors(Airport airport) {
        vector<Airport*> succAirports;
        for (auto route : routes) {
            Route *rout = route.second;
            if (rout->getSourceAirportID().compare(airport.getAirportID()) == 0) {
                string des_airport_id = rout->getDestinationAirportID();
                Airport *desAirport = NULL;
                desAirport = this->airports.at(des_airport_id);
                if (!(desAirport == NULL))
                    succAirports.push_back(desAirport);      
        }}
        cout << succAirports.size() << endl;
        return succAirports;
    }

    string dCity() {
        return destinationCity;
    }

    string dCountry() {
        return destinationCountry;
    }

    /**
     * This function checks if the airport is a destination airport
     *
     * @param airport the airport that is being checked to see if it is a
     *                destination
     * @return A boolean value.
     */
    bool isDestination(Airport airport) {
        bool checker = false;
        for (auto temp : airports) {
            Airport *air = temp.second;
            if (air->getAirportCity().compare(this->destinationCity) == 0 && air->getAirportCountry().compare(this->destinationCountry) == 0) {
                
                for (auto route : routes) {
                    Route *rout = route.second;
                    if (rout->getSourceAirportID().compare(airport.getAirportID()) == 0 &&
                             rout->getDestinationAirportID().compare(air->getAirportID()) == 0) {

                                string destination_airport_id = rout->getDestinationAirportID();
                                if (airports.find(destination_airport_id) != airports.end()){
                                    cout <<"Destination Airport: "<< airports[destination_airport_id]->getAirportName()<<endl;
                                }     
                                checker = true;
                                break;
                    }
                }
            }
        }
        return checker;
    }

    /**
     * We start with a source airport, and then we add it to a queue. We then check
     * if the source
     * airport is the destination airport. If it is, we return the solution path. If
     * it isn't, we add
     * the source airport to a set of explored airports. We then loop through the
     * successors of the
     * source airport, and add them to the queue if they aren't in the queue or the
     * set of explored
     * airports. We then check if the successor is the destination airport. If it
     * is, we return the
     * solution path. If it isn't, we add the successor to the queue
     *
     * @return The solution path is being returned.
     */

    vector<Airport> breadthFirstSearch() {
        cout << "Start City : " << startCity << "\nStart Country : " << startCountry << "\nDestination City : " << destinationCity << "\nDestination Country : " << destinationCountry << endl;

        Airport airport = sourceAirport(startCity, startCountry);
        cout <<"Start journey from: "<< airport.getAirportName() << endl;
        Node *node = new Node(airport);

        if (isDestination(*node->getState())){
            // cout << "Found the solution\n";
            return node->solutionPath();
        }
            

        else {
            deque<Node*> frontier;
            frontier.push_back(node);
            set<Airport*> explored;

            while (!(frontier.empty())) {
                Node* exploredNode = frontier.front();
                cout <<"Popped: " << exploredNode->getState()->getAirportName() << endl;
                frontier.pop_front();
                Airport* port = exploredNode->getState();
                explored.insert(port);

                vector<Airport*> successors;
                successors = getSuccessors(*port);
                cout <<"\nNumber of successors: "<< successors.size() <<endl;

                for (int index = 0; index < successors.size(); index++) {
                    Node *child = new Node(*successors.at(index), *exploredNode);
                    bool is_in1 = !(find(explored.begin(), explored.end(), child->getState()) != explored.end());
                    bool is_in2 = !(find(frontier.begin(), frontier.end(), child) != frontier.end());
                    if (is_in1 && is_in2) {
                        if (isDestination(*child -> getState())) {
                            return child -> solutionPath();
                        } else {
                            frontier.push_back(child);
                        }
                    }
                }
            }
        }
        return {};
    }
};


void inputTextWriter(string filename) {
    string init_city;
    string init_country;
    string dest_city;
    string dest_country;

    ofstream writer;
    writer.open(filename);

    cout << "Enter the start city:\n";
    getline(cin, init_city);
    cout << "Enter the start country:\n";
    getline(cin, init_country);

    cout << "Enter the destination city:\n";
    getline(cin, dest_city);
    cout << "Enter the destination country:\n";
    getline(cin, dest_country);

    writer << init_city << "," << init_country + "\n";
    writer << dest_city << "," << dest_country;
    writer.close();
}

/**
 * It reads the contents of a file and returns an array of strings, where each
 * string is a line
 * from the file
 *
 * @param filename the name of the file to read from
 * @return An ArrayList of Strings
 */
vector<vector<string>> readOutput(string filename) {
    vector<vector<string>> output;
    vector<string> line;
    string city;
    string country;

    ifstream file;
    file.open(filename);
    if (file.is_open()) {
        while (file.good()) {
            getline(file, city, ',');
            getline(file, country, '\n');
            line.push_back(city);
            line.push_back(country);
            output.push_back(line);
        }
    }
    else {
        cout << "FILE NOT FOUND" << endl;
    }

    file.close();

    return output;
}

int main() {
    inputTextWriter("input.csv");
    //writeFinalOutputToFile("output.txt");

    FindRoute finder;

    vector<Airport> visitedAiports = finder.breadthFirstSearch();

    return 0;
}