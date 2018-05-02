#include "Coordinator.h"

Coordinator::Coordinator()
    :m_firstName(""), m_lastName(""), m_roomNo(""), m_phoneNo(""), m_emailAddress("")
{}

void Coordinator::SetFirstName(const string &fnam)
{
    m_firstName = fnam;
}

void Coordinator::GetFirstName(string &fnam) const
{
    fnam = m_firstName;
}

void Coordinator::SetLastName(const string &lnam)
{
    m_lastName = lnam;
}

void Coordinator::GetLastName(string &lnam) const
{
    lnam = m_lastName;
}

void Coordinator::SetRoom(const string &room)
{
    m_roomNo = room;
}

void Coordinator::GetRoom(string &room) const
{
    room = m_roomNo;
}
