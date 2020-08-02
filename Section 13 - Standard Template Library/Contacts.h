#include <string>

enum class EGroup
{
    Friends,
    Family,
    Coworker,
    Acquaintance
};

class Contacts
{
    std::string FName{};
    std::string LName{};
    std::string PPhone{};
    std::string SPhone{};
    std::string Email{};
    std::string Address{};
    std::string Company{};
    EGroup Group{};

public:
    Contacts(std::string FirstName, std::string LastName, std::string PrimPhone, std::string SecPhone, std::string EmailId,
        std::string Addr, std::string Comp, EGroup Gr);

    std::string GetFName() const;
    std::string GetLName() const;
    std::string GetPPhone() const;
    std::string GetSPhone() const;
    std::string GetEmail() const;
    std::string GetAddress() const;
    std::string GetCompany() const;
    EGroup GetGroup() const;
    std::string GetGroupName() const;

    void PrintContact() const;
    void PrintNames() const;
};