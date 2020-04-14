#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

#pragma once
class RadioStation
{
private:
    string name;
    float channel;
    int bandwidth;

public:
    RadioStation(string name_, float channel_, int bandwidth_)
    {
        setName(name_);
        setChannel(channel_);
        setBandwidth(bandwidth_);
    }

    void setName(string name_)
    {
        if (name_ == "")
        {
            throw runtime_error("Station name must not be empty!");
        }

        name = name_;
    }

    void setChannel(float channel_)
    {
        if ((channel_ < 0) || (channel_ > 100))
        {
            throw runtime_error("Invalid channel!");
        }

        channel = channel_;
    }

    void setBandwidth(int bandwidth_)
    {
        if (bandwidth_ <= 0)
        {
            throw runtime_error("Bandwidth must be a positive number!");
        }

        bandwidth = bandwidth_;
    }

    void broadcast(string message)
    {
        if (message == "")
        {
            throw runtime_error("Message must not be empty!");
        }

        if (bandwidth <= 0)
        {
            throw runtime_error("Insufficient Bandwidth!");
        }

        cout << message << endl;
        bandwidth--;
    }
}; 
