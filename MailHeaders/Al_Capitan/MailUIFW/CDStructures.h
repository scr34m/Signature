//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct WKPageContextMenuClientBase {
    int _field1;
    void *_field2;
};

struct WKPageContextMenuClientV2 {
    struct WKPageContextMenuClientBase _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct WKPageFindMatchesClientBase {
    int _field1;
    void *_field2;
};

struct WKPageFindMatchesClientV0 {
    struct WKPageFindMatchesClientBase _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

