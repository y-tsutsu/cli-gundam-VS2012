#pragma once

#include "IMovable.h"
#include "IDrawable.h"

namespace RX78_2
{
	namespace DirectX
	{
		using namespace System;
		using namespace System::Drawing;
		using namespace Microsoft::DirectX;
		using namespace Microsoft::DirectX::Direct3D;

		/**
		 * ランダム移動キューブ
		 */
		ref class RandomMovingCube : IMovable, IDrawable
		{
		/**
		 * フィールド
		 */
		private:
			initonly Vector3 range;
			initonly Material shadowMaterial;
			initonly float size;

			Random^ random;

			Mesh^ mesh;
			Material material;
			Vector3 location;

			Vector3 targetLocation;
			Vector3 step;
			int count;

		/**
		 * コンストラクタ
		 */
		public:
			RandomMovingCube(Device^ device, Vector3 range, float size, Random^ random);

		/**
		 * メソッド
		 */
		private:
			void Reset();

		public:
			/// 移動
			virtual void Move(Device^ device);
			/// 描画
			virtual void Draw(Device^ device, LightingConfig ^lightingConfig);
			/// 影描画
			virtual void DrawShadow(Device^ device, LightingConfig^ lightingConfig, Plane plane);
		};
		// ----------------------------------------------------------------------------------------------------
	}
}
