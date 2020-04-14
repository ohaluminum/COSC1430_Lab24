# COSC1430_Lab24

For this assignment, you're given a partially completed class RadioStation. Complete it's following methods:

    void setName(string): check if the string is empty. If it is then throw an std::runtime_error with this message:

      -Station name must not be empty!
      -otherwise, set the name to that new string. 
      -This function is provided to you as a reference for the implementation of the functions below.

    void setChannel(float): check if the float is negative, or more than 100 and throw an std::runtime_error with the following message:

      -Invalid channel!
      -otherwise, set the channel to that new float

    void setBandwidth(int): check if the int is negative and throw an std::runtime_error with the following message:

      -Bandwidth must be a positive number!
      -otherwise, set the bandwidth to that new int

    void broadcast(string): check if the string is empty and throw an std::runtime_error with the following message:

      -Message must not be empty!
      -Then, check if bandwidth is not positive and throw an std::runtime_error with the following message:
      -Insufficient Bandwidth!
      -otherwise, print out the message and decrement the bandwidth

    A constructor that takes in (name, channel, bandwidth), make sure to call the setter functions (setName, setChannel,…) so that the exception checking is effective!

Main.cpp

    In the main function, surround each of the indicated (commented) blocks of code with a try catch block that catches the runtime_error and print out it's message with error.what().
