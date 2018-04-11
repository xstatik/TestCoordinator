//Coordinator.h
//Using git for version control

#ifndef COORDINATOR_H
#define COORDINATOR_H

#include <string>

using namespace std;

	/**
	 * @class Coordinator
	 * @brief  To hold the details of a Coordinator
	 *
	 * To hold the details of a Coordinator such as name, room no, phone and email.
	 *
	 * @author Wade Davidson
	 * @version 01
	 * @date 11/04/2018 Wade Davidson, added private member variables and pushed to git.
	 *
	 * @todo Everything
	 *
	 * @bug None yet....
	 */

class Coordinator
{
    public:
        Coordinator();

    private:
        string m_firstName;
        string m_lastName;
        string m_roomNo;
        string m_phoneNo;
        string m_emailAddress;
};

#endif // COORDINATOR_H
