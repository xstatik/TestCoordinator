#include "Coordinator.h"

Coordinator::Coordinator()
{
    string m_firstName = "";
    string m_lastName = "";
    string m_roomNo = "";
    string m_phoneNo = "";
    string m_emailAddress = "";
}

void Coordinator::SetFirstName(const string &fnam)
{
    m_firstName = fnam;
}

void Coordinator::GetFirstName(string &fnam) const
{
    fnam = m_firstName;
}
