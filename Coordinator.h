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
	 * @author Wade Davidson
	 * @version 03
	 * @date 02/05/2018 Wade Davidson, added SetLastName and GetLastName. Tested.
	 *
	 * @author Wade Davidson
	 * @version 04
	 * @date 02/05/2018 Wade Davidson, added SetRoom and GetRoom. Tested.
	 *
	 * @author Wade Davidson
	 * @version 05
	 * @date 02/05/2018 Wade Davidson, added SetPhone and GetPhone. Tested.
	 *
	 * @author Wade Davidson
	 * @version 06
	 * @date 02/05/2018 Wade Davidson, added SetEmail and GetEmail. Tested.
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
        void GetLastName(string &lnam) const;
            /**
            * @brief Sets Last name of Coordinator
            *
            * @param  lnam last name of coordinator.
            * @return void
            * @post set last name.
            */
        void SetLastName(const string &lnam);
            /**
            * @brief Gets last name of the Coordinator
            *
            * @param  lnam last name of coordinator.
            * @return void
            * @post set last name.
            */
        void GetFirstName(string &lnam) const;
            /**
            * @brief Sets room number of the Coordinator
            *
            * @param  room room number of the coordinator.
            * @return void
            * @post set room number.
            */
        void SetRoom(const string &room);
            /**
            * @brief Gets room number of the Coordinator
            *
            * @param  room room number of the coordinator.
            * @return void
            * @post return room number.
            */
        void GetRoom(string &room) const;
            /**
            * @brief Sets phone number of the Coordinator
            *
            * @param  phone phone number of the coordinator.
            * @return void
            * @post set phone number.
            */
        void SetPhone(const string &phone);
            /**
            * @brief Gets phone number of the Coordinator
            *
            * @param  phone phone number of the coordinator.
            * @return void
            * @post return phone number.
            */
        void GetPhone(string &email) const;
            /**
            * @brief Sets email address of the Coordinator
            *
            * @param  email email address of the coordinator.
            * @return void
            * @post set email address.
            */
        void SetEmail(const string &email);
            /**
            * @brief Gets email address of the Coordinator
            *
            * @param  email email address of the coordinator.
            * @return void
            * @post return email address.
            */
        void GetEmail(string &email) const;

    private:
        string m_firstName;
        string m_lastName;
        string m_roomNo;
        string m_phoneNo;
        string m_emailAddress;
};

#endif // COORDINATOR_H
