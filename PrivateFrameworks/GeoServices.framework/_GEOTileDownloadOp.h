/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOSimpleTileRequester, NSData, NSMutableData, NSString, NSURL, NSURLConnection, _GEOTileDownloadOp;

@interface _GEOTileDownloadOp : NSObject <NSURLConnectionDelegate> {
    struct _GEOTileKey { 
        unsigned int z : 6; 
        unsigned int x : 26; 
        unsigned int y : 26; 
        unsigned int type : 6; 
        unsigned int pixelSize : 8; 
        unsigned int textScale : 8; 
        unsigned int provider : 8; 
        unsigned int expires : 1; 
        unsigned int reserved1 : 7; 
        unsigned char reserved2[4]; 
    int _attempts;
    NSData *_auditToken;
    _GEOTileDownloadOp *_baseTile;
    NSData *_cachedData;
    NSString *_cachedEtag;
    NSURLConnection *_conn;
    unsigned long long _contentLength;
    NSMutableData *_data;
    GEOSimpleTileRequester *_delegate;
    long long _eTagType;
    NSString *_editionHeader;
    } _key;
    _GEOTileDownloadOp *_localizationTile;
    NSString *_responseEtag;
    double _startTime;
    unsigned int _tileEdition;
    double _timeout;
    NSURL *_url;
    NSString *_userAgent;
    bool_finished;
    bool_gotData;
    bool_requireWiFi;
    bool_useCookies;
}

@property(retain) NSData * auditToken;
@property(retain) _GEOTileDownloadOp * baseTile;
@property(retain) NSData * cachedData;
@property(retain) NSString * cachedEtag;
@property(retain) NSURLConnection * conn;
@property(readonly) unsigned long long contentLength;
@property(retain) NSMutableData * data;
@property(copy,readonly) NSString * debugDescription;
@property GEOSimpleTileRequester * delegate;
@property(copy,readonly) NSString * description;
@property long long eTagType;
@property(retain) NSString * editionHeader;
@property(readonly) bool finished;
@property(readonly) unsigned long long hash;
@property struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; } key;
@property(retain) _GEOTileDownloadOp * localizationTile;
@property bool requireWiFi;
@property(retain) NSString * responseEtag;
@property(readonly) Class superclass;
@property unsigned int tileEdition;
@property double timeout;
@property(retain) NSURL * url;
@property bool useCookies;
@property(retain) NSString * userAgent;

- (id)auditToken;
- (id)baseTile;
- (id)cachedData;
- (id)cachedEtag;
- (void)cancel;
- (id)conn;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (unsigned long long)contentLength;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (long long)eTagType;
- (id)editionHeader;
- (double)elapsed;
- (bool)finished;
- (struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })key;
- (id)localizationTile;
- (bool)requireWiFi;
- (id)responseEtag;
- (void)setAuditToken:(id)arg1;
- (void)setBaseTile:(id)arg1;
- (void)setCachedData:(id)arg1;
- (void)setCachedEtag:(id)arg1;
- (void)setConn:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setETagType:(long long)arg1;
- (void)setEditionHeader:(id)arg1;
- (void)setKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg1;
- (void)setLocalizationTile:(id)arg1;
- (void)setRequireWiFi:(bool)arg1;
- (void)setResponseEtag:(id)arg1;
- (void)setTileEdition:(unsigned int)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseCookies:(bool)arg1;
- (void)setUserAgent:(id)arg1;
- (void)start;
- (unsigned int)tileEdition;
- (double)timeout;
- (id)url;
- (bool)useCookies;
- (id)userAgent;

@end
