public RollingProximityId generateId(int intervalNumber) 
    throws CryptoException 
{
    return new RollingProximityId(
        encryptor.encrypt(
            generatePaddedData(intervalNumber, aesPadding)), 
        true);
}
