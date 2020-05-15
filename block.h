using namespace std;
class Block{
  private:
    int prev_hash_val;
    int hash_val;
    string val;
  public:
    Block(int, string);
    string get_val();
    int get_hash();
};