#ifndef DEPUTADO_H_INCLUDED
#define DEPUTADO_H_INCLUDED

class GastoDeputado {

    public:
        string getBuggedDate();
        void setBuggedDate(string buggedDate);
        string getReceiptDate();
        void setReceiptDate(string receiptDate);
        int getDeputyId();
        void setDeputyId(int deputyId);
        string getPoliticalParty();
        void setPoliticalParty(string politicalParty);
        string getStateCode();
        void setStateCode(string stateCode);
        string getDeputyName();
        void setDeputyName(string deputyName);
        string getReceiptSocialSecurityNumber();
        void setReceiptSocialSecurityNumber(string receiptSocialSecurityNumber);
        string getReceiptDescription();
        void setReceiptDescription(string receiptDescription);
        string getEstablishmentName();
        void setEstablishmentName(string establishmentName);
        int getReceiptValue();
        void setReceiptValue(int receiptValue);

        GastoDeputado();
        GastoDeputado(
                string buggedDate,
                string receiptDate,
                int deputyId,
                string politicalParty,
                string stateCode,
                string deputyName,
                string receiptSocialSecurityNumber,
                string receiptDescription,
                string establishmentName,
                int receiptValue);
        ~GastoDeputado();

    private:
        string buggedDate;
        string receiptDate;
        int deputyId;
        string politicalParty;
        string stateCode;
        string deputyName;
        string receiptSocialSecurityNumber;
        string receiptDescription;
        string establishmentName;
        int receiptValue;
};

#endif // SORTING_H_INCLUDED
