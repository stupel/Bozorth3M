#ifndef BOZORTHMULTITHREAD_H
#define BOZORTHMULTITHREAD_H

#include <QApplication>
#include <QMap>
#include <QString>
#include <QVector>
#include <QObject>
#include <QTime>
#include <QDebug>
#include <QThread>
#include <tuple>
#include <algorithm>

#include "bozorththread.h" // Bozorth3 worker thread
#include "bozorth3m.h" // Bozorth3 DLL


typedef QVector<FINGERPRINT_PAIR> FINGERPRINT_PAIRS; // vector of fingerprint pairs to match
typedef QVector<std::tuple<QPoint,int,int,int>> MINUTIAE_VECTOR;


class BozorthMultiThread : public QObject
{
    Q_OBJECT
public:
    explicit BozorthMultiThread(QObject *parent = nullptr);
    void setParameters(int _numThreads, QMap<QString,MINUTIAE_VECTOR> _minDataAll, FINGERPRINT_PAIRS _fingerprint_pairs);
    void matchAll();
    bool distributeFingerprintPairs();

signals:
    void bozorthThreadsFinished(int); // this signal is emitted after all threads finished

public slots:
    void OneBozorthThreadFinished();
private:

    QMap<QString,MINUTIAE_VECTOR> minDataAll; // minutiae data for all fingerprints
    FINGERPRINT_PAIRS fingerprint_pairs; // all fingerprint pairs to match
    QVector<FINGERPRINT_PAIRS> thread_fingerprint_pairs; // each element in this vector represents a vector of fingerprint pairs per thread

    QVector<QThread*> threads; // vector of threads executing Bozorth matching in parallel
    int numThreads; // number of threads
    int threadsFinished; // number of finished threads
    QTime timer; // for measuring time
};

#endif // BOZORTHMULTITHREAD_H
