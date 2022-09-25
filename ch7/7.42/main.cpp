using std::string;

class Book{
public:
    Book(unsigned isbn, std::string const& name, std::string const& author, std::string const& pubdate)
        :isbn_(isbn), name_(name), author_(author), pubdate_(pubdate){}
    Book(unsigned isbn) : Book(isbn, "", "", "") {}

    explicit Book(std::istream &in){
        in >> isbn_ >> name_ >> author_ >> pubdate_;
    }

private:
    unsigned isbn_;
    string name_;
    string author_;
    string pubdate_;
};
