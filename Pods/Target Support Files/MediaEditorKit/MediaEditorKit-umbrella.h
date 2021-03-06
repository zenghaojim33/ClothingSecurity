#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ActionStage.h"
#import "ASActor.h"
#import "ASHandle.h"
#import "ASQueue.h"
#import "ASWatcher.h"
#import "AVURLAsset+TGMediaItem.h"
#import "Freedom.h"
#import "FreedomUIKit.h"
#import "GLProgram.h"
#import "GPUImageContext.h"
#import "GPUImageFilter.h"
#import "GPUImageFramebuffer.h"
#import "GPUImageFramebufferCache.h"
#import "GPUImageOutput.h"
#import "GPUImageTwoInputFilter.h"
#import "JNWSpringAnimation.h"
#import "LegacyComponentsAccessChecker.h"
#import "LegacyComponentsContext.h"
#import "LegacyComponentsGlobals.h"
#import "LegacyComponentsInternal.h"
#import "matrix.h"
#import "MediaEditorKit.h"
#import "MKColor.h"
#import "MKHacks.h"
#import "MKImageUtils.h"
#import "MKLegacyComponentsContext.h"
#import "MKMediaEditingContext.h"
#import "MKMediaVideoConverter.h"
#import "MKOverlayController.h"
#import "MKOverlayControllerWindow.h"
#import "MKPaintBrush.h"
#import "MKPaintBrushPreview.h"
#import "MKPaintBuffers.h"
#import "MKPaintCanvas.h"
#import "MKPaintEllipticalBrush.h"
#import "MKPainting.h"
#import "MKPaintingData.h"
#import "MKPaintingWrapperView.h"
#import "MKPaintInput.h"
#import "MKPaintNeonBrush.h"
#import "MKPaintPanGestureRecognizer.h"
#import "MKPaintPath.h"
#import "MKPaintRadialBrush.h"
#import "MKPaintRender.h"
#import "MKPaintShader.h"
#import "MKPaintShaderSet.h"
#import "MKPaintSlice.h"
#import "MKPaintState.h"
#import "MKPaintSwatch.h"
#import "MKPaintTexture.h"
#import "MKPaintUndoManager.h"
#import "MKPhotoBrushSettingsView.h"
#import "MKPhotoCropAreaView.h"
#import "MKPhotoCropControl.h"
#import "MKPhotoCropController.h"
#import "MKPhotoCropGridView.h"
#import "MKPhotoCropRotationView.h"
#import "MKPhotoCropScrollView.h"
#import "MKPhotoCropView.h"
#import "MKPhotoEditor.h"
#import "MKPhotoEditorAnimation.h"
#import "MKPhotoEditorButton.h"
#import "MKPhotoEditorController.h"
#import "MKPhotoEditorGenericToolView.h"
#import "MKPhotoEditorInterfaceAssets.h"
#import "MKPhotoEditorItem.h"
#import "MKPhotoEditorItemController.h"
#import "MKPhotoEditorPicture.h"
#import "MKPhotoEditorPreviewView.h"
#import "MKPhotoEditorSliderView.h"
#import "MKPhotoEditorTabController.h"
#import "MKPhotoEditorToolButtonsView.h"
#import "MKPhotoEditorToolView.h"
#import "MKPhotoEditorUtils.h"
#import "MKPhotoEditorValues.h"
#import "MKPhotoEditorView.h"
#import "MKPhotoEntitiesContainerView.h"
#import "MKPhotoPaintActionsView.h"
#import "MKPhotoPaintColorPicker.h"
#import "MKPhotoPaintController.h"
#import "MKPhotoPaintEntity.h"
#import "MKPhotoPaintEntityView.h"
#import "MKPhotoPaintFont.h"
#import "MKPhotoPaintSelectionContainerView.h"
#import "MKPhotoPaintSettingsView.h"
#import "MKPhotoPaintSettingsWrapperView.h"
#import "MKPhotoPaintSparseView.h"
#import "MKPhotoPaintStickerEntity.h"
#import "MKPhotoPaintTextEntity.h"
#import "MKPhotoQualityController.h"
#import "MKPhotoTextEntityView.h"
#import "MKPhotoTextSettingsView.h"
#import "MKPhotoToolbarView.h"
#import "MKProgressSpinnerView.h"
#import "MKProgressWindow.h"
#import "MKVideoEditAdjustments.h"
#import "MKViewController.h"
#import "NSObject+TGLock.h"
#import "NSValue+JNWAdditions.h"
#import "SGraphListNode.h"
#import "SGraphNode.h"
#import "SGraphObjectNode.h"
#import "SAtomic.h"
#import "SBag.h"
#import "SBlockDisposable.h"
#import "SDisposable.h"
#import "SDisposableSet.h"
#import "SMetaDisposable.h"
#import "SMulticastSignalManager.h"
#import "SQueue.h"
#import "SSignal+Accumulate.h"
#import "SSignal+Catch.h"
#import "SSignal+Combine.h"
#import "SSignal+Dispatch.h"
#import "SSignal+Mapping.h"
#import "SSignal+Meta.h"
#import "SSignal+Multicast.h"
#import "SSignal+Pipe.h"
#import "SSignal+SideEffects.h"
#import "SSignal+Single.h"
#import "SSignal+Take.h"
#import "SSignal+Timing.h"
#import "SSignal.h"
#import "SSignalKit.h"
#import "SSubscriber.h"
#import "SThreadPool.h"
#import "SThreadPoolQueue.h"
#import "SThreadPoolTask.h"
#import "STimer.h"
#import "SVariable.h"
#import "TGAnimationBlockDelegate.h"
#import "TGMediaAsset+TGMediaEditableItem.h"
#import "TGMediaAsset.h"
#import "TGMediaAssetFetchResult.h"
#import "TGMediaAssetFetchResultChange.h"
#import "TGMediaAssetGroup.h"
#import "TGMediaAssetImageSignals.h"
#import "TGMediaAssetModernImageSignals.h"
#import "TGMediaAssetMoment.h"
#import "TGMediaAssetMomentList.h"
#import "TGMediaAssetsLegacyLibrary.h"
#import "TGMediaAssetsLibrary.h"
#import "TGMediaAssetsModernLibrary.h"
#import "TGMediaSelectionContext.h"
#import "TGMemoryImageCache.h"
#import "TGMenuView.h"
#import "TGMessageImageViewOverlayView.h"
#import "TGModernButton.h"
#import "TGModernCache.h"
#import "TGModernGalleryVideoView.h"
#import "TGObserverProxy.h"
#import "TGPaintFaceDetector.h"
#import "TGPaintUtils.h"
#import "TGStringUtils.h"
#import "TGWeakDelegate.h"
#import "UIControl+HitTestEdgeInsets.h"
#import "UIImage+MKMediaEditableItem.h"
#import "UIImage+TG.h"

FOUNDATION_EXPORT double MediaEditorKitVersionNumber;
FOUNDATION_EXPORT const unsigned char MediaEditorKitVersionString[];

