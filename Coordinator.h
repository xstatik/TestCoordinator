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
	 * @author Wade Davidson
	 * @version 02
	 * @date 11/04/2018 Wade Davidson, added SetFirstName and GetFirstName. Tested. Added tesplan.
	 *
	 * @todo Setters and getters.
	 *
	 * @bug None yet....
	 */

class Coordinator
{
    public:
        Coordinator();
            /**
            * @brief Sets First Name of Coordinator
            *
            * @param  fnam parameter to copy first name from.
            * @return void
            * @post set m_firstName to fnam.
            */
        void SetFirstName(const string &fnam);
            /**
            * @brief Gets First Name of Coordinator
            *
            * @param  fnam parameter to copy first name to.
            * @return void
            * @post set fnam to m_firstName
            */
        void GetFirstName(string &fnam) const;

    private:
        string m_firstName;
        string m_lastName;
        string m_roomNo;
        string m_phoneNo;
        string m_emailAddress;
};

#endif // COORDINATOR_H
