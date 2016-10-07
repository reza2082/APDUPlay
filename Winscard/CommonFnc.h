#ifndef COMMONFNC_H
#define COMMONFNC_H

#include "..\Shared\globals.h"

class CCommonFnc {
public:
    static int File_GetAvailableFileName(string baseFile, string* pFreeFileName);
    static int File_AppendString(string filePath, string data);
    static int CCommonFnc::File_SaveMatrixIntFileOffset(int startFileOffset, string filePath, INT_DATA_BLOB* pBlob, int startOffset, int endOffset, BOOL bSaveBinary);
    static int CCommonFnc::File_SaveMatrixInt(string filePath, INT_DATA_BLOB* pBlob, int startOffset, int endOffset, int startFileOffset, BOOL bSaveBinary);

    static int BYTE_ConvertFromHexStringToArray(string hexaString, BYTE* pArray, BYTE* pbArrayLen);
    static int BYTE_ConvertFromHexStringToArray(string hexaString, BYTE* pArray, DWORD* pbArrayLen);
    static int BYTE_ConvertFromHexNumToByte(string hexaString, BYTE* pByte);
    static int BYTE_ConvertFromArrayToHexString(BYTE* pArray, DWORD pbArrayLen, string* pHexaString);

    static int APDU_ConvertToString(CARDAPDU* pAPDU, string* pString, BOOL toSendAPDU);

    static int String_ParseNullSeparatedArray(BYTE* array, DWORD arraySize, lcs* pValueString);
    static int String_ParseNullSeparatedArray(WCHAR* array, DWORD arraySize, lcs* pValueString);

    static int SCSAT_SaveSamples(string filePath, SAMPLE_PLOT* pSample, int startOffset = 0, int endOffset = -1);
    static int SCSAT_GetPowerSamplesFileOffset(string fileName, int* pOffset);
	static int SCSAT_EnsureFileHeader(string filePath, SCSAT_MEASURE_INFO* pInfo);

	static int Sample_GenerateSampleUniqueID(__int64* id);
    static int Sample_Free(SAMPLE_PLOT* pSample);
};

#endif
