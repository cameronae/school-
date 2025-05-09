

class vending{
    public:
        vending();
        vending(int buy, int restock);
        int GetBuy() const;
        int GetRestock() const;
        void PrintInfo() const;
        static int inv;
    private:
        int buy;
        int restock;
};
