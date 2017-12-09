#include <QtTest>

// add necessary includes here

class testAddSong : public QObject
{
    Q_OBJECT

public:
    testAddSong();
    ~testAddSong();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_case1();

};

testAddSong::testAddSong()
{

}

testAddSong::~testAddSong()
{

}

void testAddSong::initTestCase()
{

}

void testAddSong::cleanupTestCase()
{

}

void testAddSong::test_case1()
{

}

QTEST_APPLESS_MAIN(testAddSong)

#include "tst_testaddsong.moc"
