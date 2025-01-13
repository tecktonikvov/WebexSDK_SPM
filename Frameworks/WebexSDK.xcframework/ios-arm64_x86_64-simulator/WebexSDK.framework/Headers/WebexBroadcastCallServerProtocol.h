@protocol WebexBroadcastCallServerProtocol
@required
// list of required methods
- (void) startBroadcast;
- (void) stopBroadcast;
- (void) setup;
- (void)sendFrameWithTimeStamp:(NSNumber * _Nonnull)timeStamp width:(NSNumber * _Nonnull)width height:(NSNumber * _Nonnull)height data:(void * _Nonnull)data length:(NSNumber * _Nonnull)length;
- (void)sendAudioFrameWithTimeStamp:(NSNumber * _Nonnull)timeStamp data:(void * _Nonnull)data length:(NSNumber * _Nonnull)length;
@end
